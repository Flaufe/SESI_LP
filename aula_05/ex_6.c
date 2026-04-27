#include <stdio.h>

int main() {
    int n[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &n[i]);
    }

    printf("os numeros positivos sao: ");

    for (i = 0; i < 6; i++) {
        if (n[i] > 0) {
            printf("%i ", n[i]);
        }
    }
}