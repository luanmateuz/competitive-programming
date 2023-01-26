package main

import (
	"fmt"
)

func main() {

	var n, v int = 0, 0

	fmt.Scanf("%d", &n)

	for cont := 0; cont < n; cont++ {

		fmt.Printf("%d %d %d PUM\n", (v + 1), (v + 2), (v + 3))
		v += 4
	}
}
