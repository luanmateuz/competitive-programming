package main

import "fmt"

func main() {

	var x, y int

	for {
		fmt.Scanf("%d %d", &x, &y)

		if x == y {
			break
		}

		if x < y {
			fmt.Println("Crescente")
		} else {
			fmt.Println("Decrescente")
		}
	}

}
