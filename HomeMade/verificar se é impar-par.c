#include <stdio.h>

 int main()
 {
	
	int x, y;
	
	// Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
	// Armazenar um valor exprimido pelo usuário
	// Com IF dizer se ele é ímpar ou par
	
	printf("Digite um numero para verificarmos se eh impar ou par\n");
	scanf("%d", &x);
	
	if((x%2) == 0)
	{
		printf("%d eh par", x);
	}
	else
	{
		printf("%d eh impar",x);
	}
	
	
}
