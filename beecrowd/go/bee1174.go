package main

import "fmt"

func main() {
	const LEN int = 100
	var inp [LEN]float64

	for i := 0; i < LEN; i++ {
		fmt.Scanf("%f", &inp[i])
	}

	for j := 0; j < LEN; j++ {
		if inp[j] <= 10.0 {
			fmt.Printf("A[%d] = %.1f\n", j, inp[j])
		}
	}

}
