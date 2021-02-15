import os
import re
import sys

import allstat
import settings

def generate_errno_items(config, context, file):
    location = os.path.dirname(file)
    as_os = "AS_OS_" + os.path.basename(location).upper()
    source = "errno.h"

    if "os_count" in context:
        context["os_count"] += 1
    else:
        context["os_count"] = 1

    with open(file) as fp:
        lines = fp.readlines()

        rexp = r'\s*#define\s+(E\S+)\s+(\d+)\s*(/\*.*\*/)?\s*\n$'

        for line in lines:
            m = re.search(rexp, line)
            if not m:
                continue

            value = m.group(2)
            name = m.group(1)
            description = m.group(3)

            if description == None:
                description = ""
            else:
                rexp2 = r'/\*\s*(.*)\s*\*/\s*$'
                m = re.search(rexp2, description)
                if m:
                    description = m.group(1).rstrip()

            allstat.append_status_item(context, name, value, description, source, as_os)

    return context


def replace_item(context, name, item):
    cont = True
    while cont:
        cont = False
        for i in range(len(context["items"])):
            v = context["items"][i]
            if v["name"] == name:
                del context["items"][i]
                cont = True
                break

    context["items"].append(item)


def merge_items(context):
    d = {}
    for item in context["items"]:
        if not item["name"] in d:
            d[item["name"]] = []

        d[item["name"]].append(item)

    for k in d.keys():
        if len(d[k]) == context["os_count"]:
            replace = True
            item = d[k][0]
            for i in d[k]:
                if item["value"] != i["value"]:
                    replace = False
                    break

                if len(item["descr"]) < len(i["descr"]):
                    item["descr"] = i["descr"]

            if replace:
                item["os"] = "AS_OS_ANY"
                replace_item(context, k, item)

    context["items"].sort(key=lambda i: allstat.codestr2int(i["value"]))
            

def gen_errno():
    config = settings.CSettings("errno")
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_errno_items)
        context["generator"] = "ERRNO"

        merge_items(context)

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "ERRNO_CODE", os_suffix=True)


if __name__ == "__main__":
    gen_errno()
