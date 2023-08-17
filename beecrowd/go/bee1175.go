package main

import "fmt"

func main() {

	const size int = 20
	var vet []int = make([]int, int(size))

	for i := 19; i > -1; i-- {
		fmt.Scanf("%d", &vet[i])
	}

	for i := 0; i < 20; i++ {
		fmt.Printf("N[%d] = %d\n", i, vet[i])
	}

}
