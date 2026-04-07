#include<stdio.h>
void main()
{
	  int i = 1, contador = 0;
    while (i <= 50) {
        if (i % 2 == 0) {
            contador++;
        }
        i++;
    }
    printf("Quantidade de numeros pares: %d\n", contador);
}