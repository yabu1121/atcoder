package main

import (
	"fmt"
	"reflect"
)

func main (){
	aaa := "aaa"
	bbb := 'b'
	fmt.Print(reflect.TypeOf(aaa))
	fmt.Print(reflect.TypeOf(bbb))
}