#include<stdio.h>
void main()
{

	int n, contador = 0;
	do {
		printf("Digite um numero: ");
		scanf("%d", &n);
		if (n >= 0) contador++;
	} while (n >= 0);

	printf("Quantidade de numeros digitados: %d\n", contador);
}