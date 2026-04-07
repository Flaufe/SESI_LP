#include<stdio.h>
void main()
{
	int o = 1, soma = 0;
    while (o <= 10) {
        soma += o;
        o++;
    }
    printf("Soma = %d\n", soma);
}