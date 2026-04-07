#include<stdio.h>
void main()
{
	int num, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (i <= num) {
        printf("%d\n", i);
        i++;
    }
}