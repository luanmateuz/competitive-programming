package main

import "fmt"

func main() {
	var x, y, sum int = 0, 0, 0

	fmt.Scanf("%d", &x)
	fmt.Scanf("%d", &y)

	if x > y {
		temp := y
		y = x
		x = temp
	}

	for x <= y {
		if x%13 != 0 {
			sum += x
		}

		x++
	}

	fmt.Printf("%d\n", sum)

}
