#include<stdio.h>

int main() {
	int matriz[2][2];
	int soma = 0;

	//primeiro for percorre linhas
	for(int l = 0; l < 2; l++) {
		//segundo for percorre colunas
		for(int c = 0; c < 2; c++) {
			printf("\ndigite o valor para [%d][%d]: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while( l < 2) {
		c=0;
		while(c < 2) {
			printf(" | %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}

	for(int l=0; l<2; l++) {
		for(int c=0; c<2; c++) {
			soma += matriz[l][c];
		}
	}

	printf("\n a soma dos numeros eh: %d\n", soma);

}