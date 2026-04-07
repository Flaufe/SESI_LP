#include<stdio.h>
void main()
{
    int valor, notas[] = {100, 50, 20, 10, 5, 1};
    printf("Valor: ");
    scanf("%d", &valor);
    for(int i = 0; i < 6; i++) {
        printf("%d notas de %d\n", valor / notas[i], notas[i]);
        valor %= notas[i];
    }
}