package main

import (
	"fmt"
)

func main() {

	var pass int = 0

	for {
		fmt.Scanf("%d", &pass)

		if pass == 2002 {
			fmt.Println("Acesso Permitido")
			break
		} else {
			fmt.Println("Senha Invalida")
		}

	}

}
