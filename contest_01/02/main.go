package main

import (
	"fmt"
	"math"
)

func main(){
   human := 0.5 * 365
   tree1 := mathCeil(human/32)
   tree2 := mathCeil(human/20)
   fmt.Println(human, tree1, tree2)
}
