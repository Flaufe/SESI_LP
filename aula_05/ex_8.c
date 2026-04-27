#include <stdio.h>

int main() {
    int n[10];
    int i;
    float soma = 0, media;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &n[i]);
        soma += n[i];
    }

    media = soma / 10;

    printf("\n------------------------------");
    printf("\nMedia: %.2f\n", media);

    printf("\n------------------------------");
    printf("\nValores maiores que a media: ");
    for (i = 0; i < 10; i++) {
        if (n[i] > media) {
            printf("%i ", n[i]);
        }
    }
}