package main

import (
	"fmt"
	"math"
)

func main() {

	var n int

	var number float64 = 1

	fmt.Scanf("%d", &n)

	for i := 1; i <= n; i++ {
		fmt.Printf("%.0f %.0f %.0f\n", math.Pow(number, 1), math.Pow(number, 2), math.Pow(number, 3))
		number++
	}

}
