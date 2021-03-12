import os
import re
import sys

import allstat
import settings


trans = str.maketrans({"\"": "\\\"", "\\": "\\\\"})


def process_kern_return(config, context, file):
    incfile = os.path.basename(file)

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

            if name:
                m = re.search(rcms if not comm else rcmc, line)
                if m:
                    comm = True
                    descr = m.group(1).translate(trans)
                    m = re.search(r'(.*)\s+\*/$', descr)
                    if m:
                        descr = m.group(1)

                    allstat.append_item_description(context, name, 'AS_OS_MAC', descr)
                    continue

            m = re.search(rexp, line)
            if not m:
                continue

            comm = False
            name = m.group(1)
            value = m.group(2)

            allstat.append_status_item(context, name, value, "", incfile, "AS_OS_MAC")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def process_message(config, context, file):
    incfile = os.path.basename(file)

    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'#define\s*(MACH_\S+)\s+(0x[\da-fA-F]+)\s*$'
        comm = r'^/\*\s*(.*)\s+\*/\s*$'

        name = ""
        for line in lines:
            line_index += 1
                
            if name:
                m = re.search(comm, line)
                if m:
                    descr = m.group(1)
                    allstat.append_item_description(context, name, 'AS_OS_MAC', descr.translate(trans))
                    continue

            m = re.search(rexp, line)
            if not m:
                continue

            # Skip all matches till MACH_MSG_SUCCESS
            if not name and m.group(1) != "MACH_MSG_SUCCESS":
                continue

            name = m.group(1)
            value = m.group(2)

            allstat.append_status_item(context, name, value, "", incfile, "AS_OS_MAC")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def extract_os_return_description(lines, line_index):
    if line_index < 3:
        return False, ""

    if not re.search(r'^\*/.*\n?$|^\s*\*.*\n?$', lines[line_index - 1]):
        return False, ""

    i = 2
    description = ""
    while line_index - i > 0:
        text = lines[line_index - i]
        m = re.search(r'^\s*\*\s*(.*)\s*\n?$', text)
        if not m:
            return False, ""

        part = m.group(1)
        if not part:
            if not description:
                return False, ""

            return True, description.rstrip(" ")

        last = False
        m = re.search(r'^@abstract\s*(.*)$', part)
        if m:
            part = m.group(1)
            last = True

        trans = str.maketrans({"\"": "\\\"", "\\": "\\\\"})
        description = part.translate(trans) + " " + description

        if last:
            return True, description.rstrip(" ")

        i += 1

    return False, ""


def process_os_return(config, context, file, rexp, base):
    incfile = os.path.basename(file)

    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        for line in lines:
            line_index += 1
                
            m = re.search(rexp, line)
            if not m:
                continue

            name = m.group(1)

            value = allstat.codestr2int(m.group(2)) + base
            value = "0x{0:08X}".format(value & 0xFFFFFFFF)

            ok, description = extract_os_return_description(lines, line_index)
            if not ok:
                continue

            allstat.append_status_item(context, name, value, description, incfile, "AS_OS_MAC")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def process_usb(config, context, file):

    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'#define\s*(kIOUSB\S+)\s+iokit_usb_err\((0x[\da-fA-F]+)\)\s*//\s*0x[\da-fA-F]+\s+(.*)$'
        src = 'IOKit/usb/USB.h'

        name = ""
        for line in lines:
            line_index += 1
                
            m = re.search(rexp, line)
            if not m:
                continue

            name = m.group(1)
            value = allstat.codestr2int(m.group(2)) + 0xE0004000
            value = "0x{0:08X}".format(value & 0xFFFFFFFF)            
            description = m.group(3).rstrip()

            allstat.append_status_item(context, name, value, description, src, "AS_OS_MAC")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def process_ioreturn(config, context, file):

    with open(file) as fp:
        lines = fp.readlines()
        line_index = -1

        rexp = r'#define\s*(kIO\S+)\s+iokit_common_err\((0x[\da-fA-F]+)\)\s*//\s+(.*)$'
        src = 'IOReturn.h'

        name = ""
        for line in lines:
            line_index += 1
                
            m = re.search(rexp, line)
            if not m:
                continue

            name = m.group(1)
            value = allstat.codestr2int(m.group(2)) + 0xE0000000
            value = "0x{0:08X}".format(value & 0xFFFFFFFF)            
            description = m.group(3).rstrip()

            allstat.append_status_item(context, name, value, description, src, "AS_OS_MAC")

    print("Processed {}. {} items added".format(file, len(context["items"])))
    return context


def add_fw_items(context):
    src = "IOKit/firewire/IOFireWireFamilyCommon.h"
    allstat.default_item(context, "kIOConfigNoEntry", "0xE0008001", "Can't find requested entry in ROM", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireAlreadyRegistered", "0xE0008005", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireBadSelfIDs", "0xE000800C", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireBogusDCLProgram", "0xE0008101", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireBusReset", "0xE0008020", "Bus reset during command execution (current bus generation does not match that specified in command).", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireChannelActive", "0xE0008007", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireChannelNotAvailable", "0xE000800A", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireCompleting", "0xE0008104", "In the middle of completing", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireConfigROMInvalid", "0xE0008004", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireHardwareSlept", "0xE0008103", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireInsufficientPower", "0xE000800E", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireInvalidResponseLength", "0xE0008105", "Invalid Response Length", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireIsochBandwidthNotAvailable", "0xE0008106", "Isoch Bandwidth Not Available", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireLastDCLToken", "0xE0008003", "Last DCL callback of program (internal use)", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireLowCableVoltage", "0xE000800D", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireMultipleTalkers", "0xE0008006", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireNoChannels", "0xE0008009", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireNoListenerOrTalker", "0xE0008008", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireOutOfTLabels", "0xE000800F", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWirePending", "0xE0008002", "In pending queue waiting to execute", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireSeparateBus", "0xE000800B", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFireWireTalkingAndListening", "0xE0008102", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFWMessagePowerStateChanged", "0xE00087D1", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFWMessageServiceIsRequestingClose", "0xE00087D0", "", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOFWMessageTopologyChanged", "0xE00087D2", "", src, "AS_OS_MAC", True)


def add_bluetooth_items(context):
    src = "IOKit/bluetooth/IOBluetoothTypes."
    allstat.default_item(context, "kIOBluetoothConnectionAlreadyExists", "0xE0020002", "Attempting to open a connection that already exists", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOBluetoothDeviceResetError", "0xE0020001", "Device reset interrupted pending operation", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOBluetoothHCIPowerStatesNotSupported", "0xE0020004", "HCI controller does not support changing power states", src, "AS_OS_MAC", True)
    allstat.default_item(context, "kIOBluetoothNoHCIController", "0xE0020003", "", src, "AS_OS_MAC", True)


def generate_status_items(config, context, file):
    incfile = os.path.basename(file)
    if incfile == "kern_return.h":
        return process_kern_return(config, context, file)
    elif incfile == "message.h":
        return process_message(config, context, file)
    elif incfile == "OSReturn.h":
        return process_os_return(config, context, file, r'#define\s*(kOS\S+)\s+libkern_metaclass_err\((\d+)\)\s*$', 0xDC004000)
    elif incfile == "OSKextLib.h":
        return process_os_return(config, context, file, r'#define\s*(kOS\S+)\s+libkern_kext_err\((0x[\da-fA-F]+)\)\s*$', 0xDC008000)
    elif incfile == "USB.h":
        return process_usb(config, context, file)
    elif incfile == "IOReturn.h":
        return process_ioreturn(config, context, file)

    return context


def gen_kreturn():
    config = settings.CSettings("kreturn")
    with open(config.Cpp, "w") as out:
        context = allstat.status_item_generation(config, out, generate_status_items)
        context["generator"] = "KRETURN"

        allstat.default_item(context, "kOSReturnSuccess", "0x00000000", "Operation successful.", "OSReturn.h", "AS_OS_MAC", True)
        allstat.default_item(context, "kOSReturnError", "0x00000001", "Unspecified Libkern error.", "OSReturn.h", "AS_OS_MAC", True)
        add_fw_items(context)
        add_bluetooth_items(context)

        allstat.generate_status_item_array(out, context)
        allstat.generate_hash_tables(context)
        allstat.generate_footer(out, context)

        with open(config.Hpp, "w") as out:
            allstat.generate_hpp(out, context, "KERN_RETURN")


if __name__ == "__main__":
    gen_kreturn()

