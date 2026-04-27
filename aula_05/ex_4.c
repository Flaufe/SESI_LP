#include <stdio.h>

int main() {
	int n[6];
	int i;
	int maior;

	for (i = 0; i < 6; i++) {
		printf("digite o numero %i: ", i + 1);
		scanf("%i", &n[i]);
		if (i == 0) {
			maior = n[i]; // inicializa com o primeiro valor
		} else if (n[i] > maior) {
			maior = n[i];
		}

	}

	printf("o maior numero digitado eh: %i\n", maior);

}