import re
import sys

import allstat
import settings

def generate_status_items(config, context, file):
    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'#define\s*(\S+)\s*\(\(NTSTATUS\)([x0-9abcdefABCDEF]+)L\).*$'

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

            allstat.append_status_item(context, name, value, description, "ntstatus.h", "AS_OS_WINDOWS")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def gen_ntstatus():
    config = settings.CSettings("ntstatus")
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_status_items)
        context["generator"] = "NTSTATUS"

        source = "ntstatus.h"
        wait_descr = "The caller specified WaitAny for WaitType and one of the dispatcher objects in the Object array has been set to the signaled state."
        allstat.default_item(context, "STATUS_WAIT_0", "0x00000000", wait_descr, source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_WAIT_1", "0x00000001", wait_descr, source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_WAIT_2", "0x00000002", wait_descr, source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_WAIT_3", "0x00000003", wait_descr, source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_WAIT_63", "0x0000003F", wait_descr, source, "AS_OS_WINDOWS", True)

        allstat.default_item(context, "STATUS_SUCCESS", "0x00000000", "The operation completed successfully.", source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_USER_APC", "0x000000C0", "A user-mode APC was delivered before the given Interval expired.", source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_KERNEL_APC", "0x00000100", "A kernel-mode APC was delivered before the given Interval expired.", source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_ALERTED", "0x00000101", "The delay completed because the thread was alerted.", source, "AS_OS_WINDOWS", True)
        allstat.default_item(context, "STATUS_TIMEOUT", "0x00000102", "The given Timeout interval expired.", source, "AS_OS_WINDOWS", True)

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "NT_STATUS")


if __name__ == "__main__":
    gen_ntstatus()
