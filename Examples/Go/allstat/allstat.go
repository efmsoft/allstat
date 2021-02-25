package allstat

// #cgo CFLAGS: -I ../../../AllStat/include
// #cgo LDFLAGS: -lAllStat -L ../../../bin/Win32/Debug/
//
// #include "AllStat/AllStat.h"
import "C"
import "unsafe"

func ErrnoStr(err int) string {
	var p *C.char
	p = C.Errno2StrC(err)

	var content string

	if p != nil {
		content = C.GoString(p)
		C.AllStatFree(unsafe.Pointer(p))
	}

	return content
}
