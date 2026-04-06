#include<stdio.h>

int main() {
    float salario, bonus, salario_final;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 3000) {
        bonus = salario * 0.05;
    } else {
        bonus = salario * 0.10;
    }

    salario_final = salario + bonus;

    printf("Salario final com bonus: %.2f", salario_final);

}