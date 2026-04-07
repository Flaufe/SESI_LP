#include<stdio.h>
void main(){

    int num = 1, soma = 0;

    while (num != 0) {
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &num);
        soma += num;
    }
    printf("Soma total: %d\n", soma);
}