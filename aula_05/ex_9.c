#include <stdio.h>

int main() {
    int n[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &n[i]);

        if (n[i] < 0) {
            n[i] = 0;
        }
    }

    printf("\n---------------------------------------");
    printf("\nValores finais: ");
    for (i = 0; i < 10; i++) {
        printf("%i ", n[i]);
    }
}