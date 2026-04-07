#include<stdio.h>
void main()
{

	int idade, soma = 0, contador = 0;
    for (;;) {
        printf("Digite uma idade (0 para parar): ");
        scanf("%d", &idade);
        if (idade == 0) {
            break;
        }
        soma += idade;
        contador++;
    }
    if (contador > 0) {
        float media = (float)soma / contador;
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi digitada.\n");
    }
}