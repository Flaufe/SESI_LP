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
	
	int maior = matriz[0][0];
	int menor = matriz[0][0];

	printf("\nmaior e menor valor:\n");
	for(int l=0; l<4; l++) {
		for(int c=0; c<4; c++) {
			if(matriz[l][c] > maior) {
				maior = matriz[l][c];
			}
			if(matriz[l][c] < menor) {
				menor = matriz[l][c];
			}
		}
	}

	printf("maior = %i\n", maior);
	printf("menor = %i\n", menor);

}