import re
import sys

import allstat
import settings

def read_status_items(config, context, file):

    with open(file) as fp:
        lines = fp.readlines()

        #  {100, "HTTP_STATUS_CONTINUE", "100 Continue"},
        rexp = r'\s*\{\s*(\d+)\s*,\s*\"([^\"]*)\"\s*,\s*\"([^\"]*)\"\s*,\s*\"([^\"]*)\"\s*\}\s*,\s*\n$'

        for line in lines:
            m = re.search(rexp, line)
            if not m:
                continue

            value = m.group(1)
            name = m.group(2)
            description = m.group(3)
            source = m.group(4)

            allstat.append_status_item(context, name, value, description, source, "AS_OS_ANY")

    return context


def gen_http():
    config = settings.CSettings("http")
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, read_status_items)
        context["generator"] = "HTTP"

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "HTTP_STATUS_CODE")


if __name__ == "__main__":
    gen_http()
