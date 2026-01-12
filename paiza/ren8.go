package main

import (
	"fmt"
)

func main() {
	var num1 int32 = 202
	var num2 int32 = 134
	var num3 int32 = 107
	var base int64 = int64((num1 + num2) * num3)
	// math.Powはflaot64で出力だから整数で出したいときは使ええない
	fmt.Println(base * base)
}