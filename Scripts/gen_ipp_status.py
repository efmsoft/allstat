import re
import sys

import allstat
import settings

def generate_status_items(config, context, file):
    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'^\s+(ippSts\S+)\s*=\s*([\+\-\d]+)\s*,?\s*/\*\s*(.*)\*/\s*$'

        for line in lines:
            line_index += 1
                
            m = re.search(rexp, line)
            if not m:
                continue

            comm = False
            name = m.group(1)
            value = m.group(2)
            descr = m.group(3).strip()

            allstat.append_status_item(context, name, value, descr, "ippdefs.h", "AS_OS_ANY")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def gen_ipp_status():
    config = settings.CSettings("ipp_status")
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_status_items)
        context["generator"] = "IPP_STATUS"

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "IPP_STATUS")


if __name__ == "__main__":
    gen_ipp_status()

