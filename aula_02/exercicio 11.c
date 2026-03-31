#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n2 == 0) {
        printf("Nao e possivel verificar (divisao por zero)\n");
    } else if (n1 % n2 == 0) {
        printf("O primeiro numero e multiplo do segundo\n");
    } else {
        printf("O primeiro numero NAO e multiplo do segundo\n");
    }

    return 0;
}