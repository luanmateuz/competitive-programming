package main

import (
	"fmt"
)

func main() {

	var p, v = 0, 0
	var inp int = 0
	fmt.Scanf("%d", &inp)

	var vet []int = make([]int, int(inp))

	for i := 0; i < len(vet); i++ {

		fmt.Scanf("%d", &vet[i])
		if i == 0 || vet[i] < v {
			p = i
			v = vet[i]
		}
	}

	fmt.Printf("Menor valor: %d\nPosicao: %d\n", v, p)
}
