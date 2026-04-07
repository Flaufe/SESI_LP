#include<stdio.h>
void main()
{
	  int i = 1, soma = 0;
    while (i <= 100) {
        if (i % 2 != 0) {
            soma += i;
        }
        i++;
    }
    printf("Soma dos numeros impares: %d\n", soma);
}