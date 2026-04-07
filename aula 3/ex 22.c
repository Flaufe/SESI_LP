#include<stdio.h>
void main()
{
	int n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    while (n <= 0) {
        printf("Valor invalido! Digite novamente: ");
        scanf("%d", &n);
    }

    printf("Numero valido: %d\n", n);
}