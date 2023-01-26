package main

import "fmt"

func main() {
	var input uint
	var alc, gas, die uint = 0, 0, 0

	for {
		fmt.Scanf("%d", &input)

		if input == 4 {
			break
		}

		switch input {
		case 1:
			alc++
		case 2:
			gas++
		case 3:
			die++
		}

	}

	fmt.Printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die)

}
