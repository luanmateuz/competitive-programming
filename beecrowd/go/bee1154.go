package main

import "fmt"

func main() {
	var inp float64 = 0.0
	var r float64 = 0.0
	var c int = 0

	for {
		fmt.Scanf("%f", &inp)
		if inp < 0 {
			break
		}
		r += inp
		c++
	}

	fmt.Printf("%.2f\n", (r / float64(c)))
}
