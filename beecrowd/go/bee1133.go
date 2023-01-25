package main

import (
	"fmt"
)

func main() {

	var x, y int = 0, 0

	fmt.Scanf("%d", &x)
	fmt.Scanf("%d", &y)

	if y < x {
		var temp int = x
		x = y
		y = temp
	}

	for x += 1; x < y; x++ {
		if x%5 == 2 || x%5 == 3 {
			fmt.Printf("%d\n", x)
		}

	}

}
