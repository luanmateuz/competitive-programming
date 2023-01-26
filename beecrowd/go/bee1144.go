package main

import (
	"fmt"
	"math"
)

func main() {
	var n int = 0
	var i float64 = 1

	fmt.Scanf("%d", &n)

	for c := 0; c < n; c++ {
		fmt.Printf("%.0f %.0f %.0f\n", math.Pow(i, 1), math.Pow(i, 2), math.Pow(i, 3))
		fmt.Printf("%.0f %.0f %.0f\n", math.Pow(i, 1), 1+math.Pow(i, 2), 1+math.Pow(i, 3))
		i++
	}

}
