#include <stdio.h>

int main() {
    float saques[10];
    float total = 0, maior;
    int i, acima500 = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor do saque %d: ", i + 1);
        scanf("%f", &saques[i]);
        total += saques[i];
    }
    maior = saques[0];

    for (i = 0; i < 10; i++) {
        if (saques[i] > maior) {
            maior = saques[i];
        }

        if (saques[i] > 500) {
            acima500++;
        }
    }
    printf("\n******************************************\n");
    printf("------------------------------------------\n");
    printf("\nTotal sacado: R$ %.2f\n", total);
    printf("Maior saque realizado: R$ %.2f\n", maior);
    printf("Quantidade de saques acima de R$ 500: %d\n", acima500);
    printf("\n------------------------------------------\n");
    printf("******************************************\n");
}