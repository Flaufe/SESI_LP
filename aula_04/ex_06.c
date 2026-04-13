#include <stdio.h>

int main() {
    int numeros[10];
    int pares[10], impares[10];
    int i;
    int contPar = 0, contImpar = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares[contPar] = numeros[i];
            contPar++;
        } else {
            impares[contImpar] = numeros[i];
            contImpar++;
        }
    }
    printf("\nNumeros pares:\n");
    for (i = 0; i < contPar; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNumeros impares:\n");
    for (i = 0; i < contImpar; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n\nQuantidade de pares: %d\n", contPar);
    printf("Quantidade de impares: %d\n", contImpar);
}