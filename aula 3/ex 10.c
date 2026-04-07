#include<stdio.h>
void main()
{
	  int n1, n2, i;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    i = n1;

    while (i <= n2) {
        printf("%d\n", i);
        i++;
    }
}