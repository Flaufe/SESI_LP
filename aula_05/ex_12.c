#include <stdio.h>

int main() {
	int n[6];
	int i;
	int maior, segundo;

	for (i = 0; i < 6; i++) {
		printf("digite o numero %i: ", i + 1);
		scanf("%i", &n[i]);
	}

	if (n[0] > n[1]) {
		maior = n[0];
		segundo = n[1];
	} else {
		maior = n[1];
		segundo = n[0];
	}

	for(i = 2; i < 6; i++) {
		if (n[i] > maior) {
			segundo = maior;
			maior = n[i];
		} else if (n[i] > segundo && n[i] != maior) {
			segundo = n[i];
		}
	}

	printf("Segundo maior valor: %d\n", segundo);
}