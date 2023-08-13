package main

import "fmt"

func main() {
	var inp int = 0

	fmt.Scanf("%d", &inp)

	for i := 1; i <= inp; i++ {
		if inp%i == 0 {
			fmt.Printf("%d\n", i)
		}
	}
}
