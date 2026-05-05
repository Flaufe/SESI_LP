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
void imprimirvalores(char *descricao, int valor) {
	printf("\n%s: %i\n", descricao, valor);
}
int main() {
	int n1, n2;
	int opcao;

	printf("\n------------ M E N U ------------\n");

	printf("**** Digite o primeiro numero: ");
	scanf("%d", &n1);

	printf("---- Digite o segundo  numero: ");
	scanf("%d", &n2);

	printf("\n*********** OPÇOES **************\n");
	printf("---- 1 -  Soma  -----------------\n");
	printf("**** 2 -  Subtracao  ************\n");
	printf("---- 3 -  Multiplicacao  --------\n");
	printf("**** 4 -  Divisao  **************\n");
	printf("---- opcao escolhida: ");
	scanf("%d", &opcao);
	printf("---------------------------------");

	if (opcao == 1) {
		imprimirvalores("**** Soma", adicao(n1, n2));

	} else if (opcao == 2) {
		imprimirvalores("**** Subtracao", subtracao(n1, n2));

	} else if (opcao == 3) {
		imprimirvalores("**** Multiplicacao", multiplicacao(n1, n2));

	} else if (opcao == 4) {
		if (n2 != 0) {
			imprimirvalores("**** Divisao", divisao(n1, n2));
		}
	}

    printf("---------------------------------");
}