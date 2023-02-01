package main

import "fmt"

func main() {
	var n int

	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		var result bool = true
		var number int = 0

		fmt.Scanf("%d", &number)

		for i := 2; i*i <= number; i++ {
			if number%i == 0 {
				result = false
			}
		}

		fmt.Print(number)
		if result {
			fmt.Println(" eh primo")
		} else {
			fmt.Println(" nao eh primo")
		}
	}

}
