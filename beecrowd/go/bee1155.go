package main

import "fmt"

func main() {
	var r float64 = 0.0

	for i := 1; i <= 100; i++ {
		r += 1 / float64(i)
	}

	fmt.Printf("%.2f\n", r)
}
