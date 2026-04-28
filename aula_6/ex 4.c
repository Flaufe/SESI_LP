#include<stdio.h>

int main() {
	int matriz[4][4];

	//primeiro for percorre linhas
	for(int l = 0; l < 4; l++) {
		//segundo for percorre colunas
		for(int c = 0; c < 4; c++) {
			printf("\ndigite o valor para [%d][%d]: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while( l < 4) {
		c=0;
		while(c < 4) {
			printf("| %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}

	printf("\nnumeros maiores que 10:\n");
	for(int l=0; l<4; l++) {
		for(int c=0; c<4; c++) {
			if(matriz[l][c] > 10) {
				printf("| %i", matriz[l][c]);
			}
		}
	}


}