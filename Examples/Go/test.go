package main

import (
	"./allstat"
	"fmt"
)

func main() {
	fmt.Println(allstat.ErrnoStr(2))	
}
