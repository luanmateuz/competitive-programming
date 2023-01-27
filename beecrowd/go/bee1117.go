package main

import "fmt"

func main() {

	var input, avg float64 = 0, 0

	counter := 0
	for counter < 2 {
		fmt.Scanf("%f", &input)

		if !(input < 0 || input > 10) {
			avg += input
			counter++
		} else {
			fmt.Println("nota invalida")
		}

	}

	fmt.Printf("media = %.2f\n", (avg / 2))

}
