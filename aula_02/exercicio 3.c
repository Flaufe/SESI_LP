#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro numero:");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    if (n1 > n2) {
        printf("O maior numero é: %i", n1);
    } else if (n2 > n1) {
        printf("O maior numero é: %i", n2);
    } else if(n1 = n2) {
        printf("Os dois numeros sao iguais.");
    }
}