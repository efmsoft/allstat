package allstat

// #cgo CFLAGS: -I ../../../AllStat/include
// #cgo LDFLAGS: -lallstat -lstdc++ -L ../../../AllStat/
//
// #include "AllStat/AllStat.h"
import "C"

func ErrnoStr(err int) string {
	var p *C.char
	p = C.Errno2StrC(C.uint32_t(err))

	var content string

	if p != nil {
		content = C.GoString(p)
		C.AllStatFree(p)
	}

	return content
}
