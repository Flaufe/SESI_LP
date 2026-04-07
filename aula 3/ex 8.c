#include<stdio.h>
void main()
{
	int num, i = 1;

    printf("Digite o numero da tabuada q vc quer: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}