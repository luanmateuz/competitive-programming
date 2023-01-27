package main

import "fmt"

func main() {

	var input, avg float64

	x := 0
	for {

		avg = 0
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

		for {
			fmt.Println("novo calculo (1-sim 2-nao)")
			fmt.Scanf("%d", &x)

			if x == 1 || x == 2 {
				break
			}
		}

		if x == 2 {
			break
		}

	}

}
