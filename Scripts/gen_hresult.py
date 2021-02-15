import os
import re
import sys

import allstat
import settings

def generate_status_items(config, context, file):
    initial_count = len(context["items"])

    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = [
            r'#define\s+(\S+)\s*\(\(HRESULT\)([x0-9abcdefABCDEF]+)L\).*$',
            r'#define\s+(\S+)\s*\_HRESULT_TYPEDEF_\(([x0-9abcdefABCDEF]+)L\).*$',
            r'#define\s+(\S+)\s*\_NDIS_ERROR_TYPEDEF_\(([x0-9abcdefABCDEF]+)L\).*$'
        ]

        for line in lines:
            line_index += 1

            for r in rexp:
                m = re.search(r, line)
                if m:
                    break
            if not m:
                continue

            name = m.group(1)
            value = m.group(2)

            if not value.startswith("0x"):
                continue

            if name.startswith("NOT_AN_ERROR") or name == "NOT_N_PARSE_ERROR":
                continue

            ok, description = allstat.extract_description(lines, line_index)
            if not ok:
                continue

            source = os.path.basename(file)
            if source.lower() in config.Maps["hpp2source"].keys():
                source = config.Maps["hpp2source"][source.lower()]

            allstat.append_status_item(context, name, value, description, source, "AS_OS_WINDOWS")

    added = len(context["items"]) - initial_count
    if added:
        print("Processed {}. {} items added".format(file, added))

    return context


def gen_hresult():
    config = settings.CSettings("hresult", ["hpp2source"])
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_status_items)
        context["generator"] = "HRESULT"

        allstat.default_item(context, "S_OK", "0x00000000", "Operation successful", "winerror.h", "AS_OS_WINDOWS")
        allstat.default_item(context, "S_FALSE", "0x00000001", "Not a failure", "winerror.h", "AS_OS_WINDOWS")

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "HRESULT_VALUE")


if __name__ == "__main__":
    gen_hresult()
