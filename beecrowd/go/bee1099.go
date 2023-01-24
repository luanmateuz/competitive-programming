package main

import "fmt"

func main() {

	var num, sum, in1, in2 int

	fmt.Scanf("%d", &num)

	for i := 0; i < num; i++ {
		sum = 0

		fmt.Scanf("%d %d", &in1, &in2)

		if in2 < in1 {
			var temp int = in1
			in1 = in2
			in2 = temp
		}

		for in1 = in1 + 1; in1 < in2; in1++ {

			if in1%2 != 0 {
				sum += in1
			}
		}

		fmt.Printf("%d\n", sum)
	}

}
