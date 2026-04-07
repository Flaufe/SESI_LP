#include<stdio.h>
void main()
{
	  int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }
}