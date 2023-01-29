package main

import "fmt"

func main() {
	var x, y int

	fmt.Scanf("%d", &x)
	fmt.Scanf("%d", &y)

	for {
		if x > 0 && y > 0 {
			fmt.Printf("primeiro\n")
		}
		if x < 0 && y > 0 {
			fmt.Printf("segundo\n")
		}
		if x < 0 && y < 0 {
			fmt.Printf("terceiro\n")
		}
		if x > 0 && y < 0 {
			fmt.Printf("quarto\n")
		}

		fmt.Scanf("%d", &x)
		fmt.Scanf("%d", &y)

		if x == 0 || y == 0 {
			break
		}

	}

}
