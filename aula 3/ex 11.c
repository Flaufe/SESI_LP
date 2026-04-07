#include<stdio.h>
void main()
{
	  int num, i = 1;
    long fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (i <= num) {
        fatorial *= i;
        i++;
    }
    printf("Fatorial de %d = %lld\n", num, fatorial);
}