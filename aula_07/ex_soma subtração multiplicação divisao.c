#include <stdio.h>

int adicao(int a, int b) {
	return a + b;
}
int subtracao(int a, int b) {
	return a - b;
}
int multiplicacao(int a, int b) {
	return a * b;
}
int divisao(int a, int b) {
	return a / b;
}

void imprimirvalores(char *descricao, int valor){
    printf("\n%s: %i", descricao, valor);
}

int main() {
	int n1, n2;
	int calcular = 0;


	printf("\ndigite o numero 1: ");
	scanf("%i", &n1);

	printf("\ndigite o numero 2: ");
	scanf("%i", &n2);
    

    imprimirvalores("soma dos numeros ", adicao(n1, n2));
    imprimirvalores("subtração dos numeros ", subtracao(n1, n2));
    imprimirvalores("multiplicação dos numeros ", multiplicacao(n1, n2));
    imprimirvalores("divisão dos numeros ", divisao(n1, n2));
	

}
