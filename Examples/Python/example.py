import ctypes
import os
import sys

apidll = None


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
        ("ConstName", ctypes.c_char_p),
        ("Source", ctypes.c_char_p),
        ("Description", AS_HANDLE),
        ("OS", ctypes.c_int32),
        ("Generator", ctypes.c_int32),
        ("Formatter", ctypes.c_int32)
    ]


def Errno2Name(value):
    method = apidll.Errno2Name
    method.argtypes = [ctypes.c_ulong]
    method.restype = ctypes.c_char_p
    s = method(value)

    if s == None:
        return None

    return s.decode()


def Name2ErrnoItem(name, asi):
    method = apidll.Name2ErrnoItem
    method.argtypes = [ctypes.c_char_p, ctypes.POINTER(AS_ITEM)]
    method.restype = ctypes.c_ulong
    return method(name.encode('utf-8'), ctypes.byref(asi))


def string_from_ptr(s):
    pstr = ctypes.cast(s, ctypes.POINTER(ctypes.c_char))
    for i in range(256):
        c = ord(pstr[i])
        if not c:
            break

    return pstr[:i].decode()


def GetDescriptionStrC(h):
    method = apidll.GetDescriptionStrC
    method.argtypes = [AS_HANDLE]
    method.restype = ctypes.c_void_p

    s = method(h)
    if s == None:
        return None

    descr = string_from_ptr(s)
    AllStatFree(s)
    return descr


def AllStatFree(pstr):
  method = apidll.AllStatFree
  method.argtypes = [ctypes.c_void_p]
  method(pstr)


def load_dll():
    global apidll

    try:
        print("platform: ", sys.platform)
        dir = os.path.dirname(os.path.abspath(__file__))
        if sys.platform == "windows":
            api_dll_path_name = dir + os.path.sep + 'AllStat.dll'
        else:
            if sys.platform == "darwin":
                os.environ["DYLD_LIBRARY_PATH"] = dir
                api_dll_path_name = dir + os.path.sep + 'liballstatd.dylib'

        print("current dir: ", os.getcwd())
        print("loading api library: ", api_dll_path_name)
        apidll = ctypes.cdll.LoadLibrary(api_dll_path_name)
    except Exception as e:
        print("unable to load api library. Error: ", str(e))
        sys.exit(1)


def main():
    load_dll()

    code = 2
    name = Errno2Name(code)
    if name == None:
        print("Constant is not defined")
        sys.exit(1)
  
    asi = AS_ITEM()
    if Name2ErrnoItem(name, asi):
        print("Unable to retrieve info item")
        sys.exit(1)

    descr = GetDescriptionStrC(asi.Description)
    print("Code: {}, Name: {}, Description: {}".format(code, name, descr))


if __name__ == '__main__':
    main()
  
