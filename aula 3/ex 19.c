#include<stdio.h>
void main()
{
	int n, maior = 0;
    for (;;) {
        printf("Digite um numero (999 para parar): ");
        scanf("%d", &n);

        if (n == 999) {
            break;
        }

        if (n > maior) {
            maior = n;
        }
    }

    printf("Maior numero digitado: %d\n", maior);
}