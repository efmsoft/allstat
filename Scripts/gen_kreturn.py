import re
import sys

import allstat
import settings

def generate_status_items(config, context, file):
    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'#define\s*(KERN_\S+)\s*(\d+)\s*$'
        rcms = r'\s*/\*\s*(.*)$'
        rcmc = r'\s*\*\s*(.*)$'
        comm = False

        name = ""
        for line in lines:
            line_index += 1
                
            if re.search(r'^(\s*)$', line) or re.search(r'^\s*\*/\s*$', line):
                name = ""
                comm = False
                continue

            if not comm and name:
                m = re.search(rcms, line)
                if m:
                    comm = True
                    allstat.append_item_description(context, name, 'AS_OS_MAC', m.group(1))
                    continue

            if comm and name:
                m = re.search(rcmc, line)
                if m:
                    allstat.append_item_description(context, name, 'AS_OS_MAC', m.group(1))
                    continue

            m = re.search(rexp, line)
            if not m:
                continue

            comm = False
            name = m.group(1)
            value = m.group(2)

            allstat.append_status_item(context, name, value, "", "kern_return.h", "AS_OS_MAC")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def gen_kreturn():
    config = settings.CSettings("kreturn")
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_status_items)
        context["generator"] = "KRETURN"

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "KERN_RETURN")


if __name__ == "__main__":
    gen_kreturn()

