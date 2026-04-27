#include <stdio.h>

int main() {
	int n[6];
	int i;
	int menor;

	for (i = 0; i < 6; i++) {
		printf("digite o numero %i: ", i + 1);
		scanf("%i", &n[i]);
		if (i == 0) {
			menor = n[i]; 
		} else if (n[i] < menor) {
			menor = n[i];
		}

	}

	printf("o menor numero digitado eh: %i\n", menor);

}