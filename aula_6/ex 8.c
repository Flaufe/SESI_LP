#include<stdio.h>

int main() {
	int A[2][2], B[2][2], C[2][2];

	// matriz A
	for(int l = 0; l < 2; l++) { //linha
		for(int c = 0; c < 2; c++) { //coluna
			printf("\nDigite o valor de A[%d][%d]: ", l+1, c+1);
			scanf("%i", &A[l][c]);
		}
	}

	// matriz B
	for(int l = 0; l < 2; l++) { //linha
		for(int c = 0; c < 2; c++) { //coluna
			printf("\nDigite o valor de B[%d][%d]: ", l+1, c+1);
			scanf("%i", &B[l][c]);
		}
	}

	// multiplicação
	for(int l = 0; l < 2; l++) {
		for(int c = 0; c < 2; c++) {
			C[l][c] = 0;
			for(int k = 0; k < 2; k++) {
				C[l][c] += A[l][k] * B[k][c];
			}
		}
	}

	int l = 0;
	int c = 0;

	printf("\nMatriz resultado:\n");

	while(l < 2) {
		c = 0;
		while(c < 2) {
			printf("| %i ", C[l][c]);
			c++;
		}
		printf("|\n");
		l++;
	}
}