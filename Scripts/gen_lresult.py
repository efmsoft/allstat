import re
import sys

import allstat
import settings

def generate_status_items(config, context, file):
    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'#define\s+(\S+)\s+(\d+)L\s*(//.*)?\n?$'

        for line in lines:
            line_index += 1

            m = re.search(rexp, line)
            if not m:
                continue

            name = m.group(1)
            value = m.group(2)
            ok, description = allstat.extract_description(lines, line_index)
            if not ok:
                continue

            allstat.append_status_item(context, name, value, description, "winerror.h", "AS_OS_WINDOWS")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def gen_lresult():
    config = settings.CSettings("lresult")
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_status_items)
        context["generator"] = "LRESULT"

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "LAST_RESULT")


if __name__ == "__main__":
    gen_lresult()
