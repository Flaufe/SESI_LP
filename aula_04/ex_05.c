#include <stdio.h>

int main() {
    float temp[7];
    float soma = 0, media;
    int i;

    int diaQuente = 0, diaFrio = 0;
    int acimaMedia = 0;

    for (i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma / 7;
    printf("\nMedia das temperaturas: %.2f\n", media);

    float maior = temp[0];
    float menor = temp[0];

    for (i = 0; i < 7; i++) {
        if (temp[i] > maior) {
            maior = temp[i];
            diaQuente = i;
        }

        if (temp[i] < menor) {
            menor = temp[i];
            diaFrio = i;
        }

        if (temp[i] > media) {
            acimaMedia++;
        }
    }

    printf("Dia mais quente: %d (%.2f graus)\n", diaQuente + 1, maior);
    printf("Dia mais frio: %d (%.2f graus)\n", diaFrio + 1, menor);
    printf("Quantidade de dias acima da media: %d\n", acimaMedia);
}