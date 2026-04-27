#include <stdio.h>

int main() {
	int n[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("digite o numero %i: ", i + 1);
		scanf("%i", &n[i]);

	}

	printf("Numeros pares: ");

	for (i = 0; i < 10; i++) {
		if (n[i] % 2 == 0) {
			printf("%i ", n[i]);

		}
	}
}