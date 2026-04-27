#include <stdio.h>

int main() {
	int n[8];
	int i;
	int soma = 0;

	for (i = 0; i < 8; i++) {
		printf("digite o numero %i: ", i + 1);
		scanf("%i", &n[i]);

	}

	printf("soma de todos: ");

	for (i = 0; i < 8; i++) {
		soma += n[i];

	}

	printf("Soma de todos: %i\n", soma);

}