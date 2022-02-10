#!/usr/bin/python3
import ctypes
import os
import sys

apidll = None

AS_NTSTATUS = 0x00000001
AS_LRESULT = 0x00000002
AS_HRESULT = 0x00000004
AS_HTTP = 0x00000008
AS_ERRNO = 0x00000010
AS_KRETURN = 0x00000020
AS_IPP_STATUS = 0x00000040
AS_BUGCHECK = 0x00000080
AS_HRESULT_FROM_WIN32 = 0x80000004
AS_ANY = 0xFFFFFFFF

AS_SUCCESS = 0

class AS_HANDLE(ctypes.Structure):
    _pack_ = 1
    _fields_ = [
        ("Handle", ctypes.c_int64),
        ("Pointer", ctypes.c_char_p)
    ]


class AS_ITEM(ctypes.Structure):
    _pack_ = 1
    _fields_ = [
        ("Code", ctypes.c_int32),
        ("Previous", ctypes.c_int32),
        ("Next", ctypes.c_int32),
        ("ConstName", ctypes.c_char_p),
        ("Source", ctypes.c_char_p),
        ("Description", AS_HANDLE),
        ("OS", ctypes.c_int32),
        ("Generator", ctypes.c_int32),
        ("Formatter", ctypes.c_int32)
    ]

class AS_ITEM_ARRAY(ctypes.Structure):
    _pack_ = 1
    _fields_ = [
        ("Count", ctypes.c_int32),
        ("Item", AS_ITEM * 32),
    ]


class AS_ENUM_CONTEXT(ctypes.Structure):
    _pack_ = 1
    _fields_ = [
        ("Signature", ctypes.c_int32),
        ("Pos", ctypes.c_int32),
        ("Table", ctypes.c_voidp),
        ("Search", ctypes.c_int32),
        ("ID", ctypes.c_int32),
    ]


def AllStatGetFirst(id, context, item):
    load_dll()
    method = apidll.AllStatGetFirst
    method.argtypes = [ctypes.c_int32, ctypes.POINTER(AS_ENUM_CONTEXT), ctypes.POINTER(AS_ITEM)]
    method.restype = ctypes.c_ulong
    return method(id, ctypes.byref(context), ctypes.byref(item))


def AllStatGetNext(context, item):
    load_dll()
    method = apidll.AllStatGetNext
    method.argtypes = [ctypes.POINTER(AS_ENUM_CONTEXT), ctypes.POINTER(AS_ITEM)]
    method.restype = ctypes.c_ulong
    return method(ctypes.byref(context), ctypes.byref(item))


def Name2Item(name, item):
    load_dll()
    method = apidll.Name2Item
    method.argtypes = [ctypes.c_char_p, ctypes.POINTER(AS_ITEM)]
    method.restype = ctypes.c_ulong
    return method(name.encode('utf-8'), ctypes.byref(item))
 

def AllStatInfoC(value):
    load_dll()
    method = apidll.AllStatInfoC
    method.argtypes = [ctypes.c_int]
    method.restype = ctypes.c_void_p
    p = method(value)
    if p == None:
        return None, None

    pa = ctypes.cast(p, ctypes.POINTER(AS_ITEM_ARRAY))
    contents = pa.contents

    return p, contents


def SetTargetOS(os):
    load_dll()
    method = apidll.SetTargetOS
    method.argtypes = [ctypes.c_int]
    method(os)


def string_from_ptr(s):
    pstr = ctypes.cast(s, ctypes.POINTER(ctypes.c_char))
    for i in range(4096):
        c = ord(pstr[i])
        if not c:
            break

    return pstr[:i].decode()


def GetDescriptionStrC(h):
    load_dll()
    method = apidll.GetDescriptionStrC
    method.argtypes = [AS_HANDLE]
    method.restype = ctypes.c_void_p

    s = method(h)
    if s == None:
        return None

    descr = string_from_ptr(s)
    AllStatFree(s)
    return descr


def GetGeneratorC(item):
    load_dll()
    method = apidll.GetGeneratorC
    method.argtypes = [ctypes.POINTER(AS_ITEM)]
    method.restype = ctypes.c_void_p
    s = method(item)
    if s == None:
        return None

    ret = string_from_ptr(s)
    AllStatFree(s)
    return ret


def GetNameStrC(item):
    load_dll()
    method = apidll.GetNameStrC
    method.argtypes = [ctypes.POINTER(AS_ITEM)]
    method.restype = ctypes.c_void_p
    s = method(item)
    if s == None:
        return None

    ret = string_from_ptr(s)
    AllStatFree(s)
    return ret


def AllStatFree(p):
    load_dll()
    method = apidll.AllStatFree
    method.argtypes = [ctypes.c_void_p]
    method(p)


def Errno2Name(value):
    load_dll()
    method = apidll.Errno2Name
    method.argtypes = [ctypes.c_ulong]
    method.restype = ctypes.c_char_p
    s = method(value)

    if s == None:
        return None

    return s.decode()


def Name2ErrnoItem(name, asi):
    load_dll()
    method = apidll.Name2ErrnoItem
    method.argtypes = [ctypes.c_char_p, ctypes.POINTER(AS_ITEM)]
    method.restype = ctypes.c_ulong
    return method(name.encode('utf-8'), ctypes.byref(asi))


def load_dll():
    global apidll

    if apidll != None:
        return

    dir = os.path.dirname(os.path.abspath(__file__))
    if sys.platform == "windows" or sys.platform == "win32":
        api_dll_path_name = dir + os.path.sep + 'AllStat.dll'
    elif sys.platform == "darwin":
        os.environ["DYLD_LIBRARY_PATH"] = dir
        api_dll_path_name = dir + os.path.sep + 'liballstatd.dylib'
    elif sys.platform == "linux":
        os.environ["LD_LIBRARY_PATH"] = dir
        api_dll_path_name = dir + os.path.sep + 'liballstatd.so'
    else:
        print("Unsupported platform: ", sys.platform)
        sys.exit(1)

    apidll = ctypes.cdll.LoadLibrary(api_dll_path_name)


def valid_os(os, allow_any=True):
    try:
        v = int(os)
        if not allow_any and not v:
            return False

        if v < 0 or v > 4:
            return False

        return True

    except:
        return False


def os_str(os):
    return str(os)


def get_os_name(os):
    if os == 0:
        return 'Any'
    if os == 1:
        return 'Windows'
    if os == 2:
        return 'Linux'
    if os == 3:
        return 'Mac'
    if os == 4:
        return 'Solaris'
    return ''


def code_str(code):
    if code & 0xFFFF0000:
        return "0x{0:08X}".format(code & 0xFFFFFFFF)
    return str(code)


def codestr2int(code_str):
    if code_str.startswith("0x") or code_str.startswith("0X"):
        return int(code_str, base=16)

    return int(code_str)


def parse_code(c):
    try:
        code = codestr2int(c)
        if (code > 0xFFFFFFFF):
            return False, 0, ''

        return True, code, code_str(code)
    except:
        return False, 0, ''


def valid_generator(g):
    try:
        v = int(g, 16)
        return True, v
    except:
        return False, -1


def generator_str(g):
    return "{0:X}".format(g & 0xFFFFFFFF)


def generator_short_name(g):
    if g == AS_NTSTATUS:
        return 'ntstatus'

    if g == AS_LRESULT:
        return 'lresult'

    if g == AS_HRESULT:
        return 'hresult'

    if g == AS_HTTP:
        return 'http'

    if g == AS_KRETURN:
        return 'kreturn'

    if g == AS_IPP_STATUS:
        return 'ippstatus'

    if g == AS_BUGCHECK:
        return 'bugcheck'

    if g == AS_HRESULT_FROM_WIN32:
        return 'from_win32'

    return generator_str(g)


def item_matched(item, os, g, c):
    if os != -1 and item.OS != 0 and item.OS != os:
        return False
    if g != -1 and item.Generator != g:
        return False
    if c and c != item.ConstName.decode().lower():
        return False
    return True


def calc_num_matched(arr, os, g, c):
    n = 0
    for i in range(arr.Count):
        item = arr.Item[i]
        if not item_matched(item, os, g, c):
            continue
        n += 1
    return n


def get_first_matched(arr, os, g, c):
    for i in range(arr.Count):
        item = arr.Item[i]
        if item_matched(item, os, g, c):
            return item, i
    return AS_ITEM(), -1
