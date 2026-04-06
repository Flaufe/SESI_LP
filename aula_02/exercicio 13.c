#include <stdio.h>

int main() {
    float a, b;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("Soma: %.2f\n", a + b);
    printf("Subtracao: %.2f\n", a - b);
    printf("Multiplicacao: %.2f\n", a * b);

    if (b != 0)
        printf("Divisao: %.2f\n", a / b);
    else
        printf("Divisao: erro (divisao por zero)\n");

}