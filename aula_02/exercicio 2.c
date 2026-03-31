#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    if (numero % 2 == 0) {
        printf("O numero %i é PAR.", numero);
    } else {
        printf("O numero %i é IMPAR.", numero);
    }
}