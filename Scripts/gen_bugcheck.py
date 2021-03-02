import re
import sys

import allstat
import settings

def generate_bugcheck_items(config, context, file):
    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'#define\s*(\S+)\s*\(\(ULONG\)([x0-9abcdefABCDEF]+)L\).*$'

        for line in lines:
            line_index += 1

            m = re.search(rexp, line)
            if not m:
                continue

            name = m.group(1)
            value = m.group(2)

            if name.lower() in config.Maps["bugcheckdescr"].keys():
                description = config.Maps["bugcheckdescr"][name.lower()]
            else:
                ok, description = allstat.extract_description(lines, line_index)
                if not ok:
                    continue

            allstat.append_status_item(context, name, value, description, "bugcodes.h", "AS_OS_WINDOWS")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def gen_bugcheck():
    config = settings.CSettings("bugcheck", ["bugcheckdescr"])
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_bugcheck_items)
        context["generator"] = "BUGCHECK"
        source = "bugcodes.h"

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "BUG_CHECK")


if __name__ == "__main__":
    gen_bugcheck()
