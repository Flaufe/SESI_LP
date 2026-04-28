#include<stdio.h>

int main() {
	int matriz[5][5];
	int soma = 0;

	//primeiro for percorre linhas
	for(int l = 0; l < 5; l++) {
		//segundo for percorre colunas
		for(int c = 0; c < 5; c++) {
			printf("\ndigite o valor para [%d][%d]: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while( l < 5) {
		c=0;
		while(c < 5) {
			printf("| %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}

	printf("\nsoma da diagonal secundaria:\n");
	for(int l=0; l<5; l++) {
		for(int c=0; c<5; c++) {
			if(l + c == 4) {
				soma += matriz[l][c];
			}
		}
	}

	printf("soma = %i\n", soma);

}