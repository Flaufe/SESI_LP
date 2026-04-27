#include <stdio.h>

int main() {
    int n;
    int i;
    float soma = 0;
    float media;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &n);
        soma += n;
    }

    media = soma / 10;

    printf("\n*************************************");
    printf("\n A media dos valores eh: %.2f\n", media);
    printf("\n*************************************");
}