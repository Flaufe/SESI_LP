#include<stdio.h>
void main()
{
    int tamanho;
    printf("Digite o tamanho do quadrado: \n");
    scanf("%i", &tamanho);

    for (int linha = 1; linha <= tamanho; linha = linha + 1){
        
        for (int coluna = 1; coluna <= tamanho; coluna = coluna + 1){
            printf("* ");
        }
        printf("\n");
    }
}