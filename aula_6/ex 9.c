#include<stdio.h>

int main() {
	int matriz[5][5];

	//primeiro for percorre linhas
	for(int l = 0; l < 5; l++) {
		//segundo for percorre colunas
		for(int c = 0; c < 5; c++) {
			printf("\ndigite o valor para [%d][%d]: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);

	// substitui negativos por 0
	if(matriz[l][c] < 0) {
		matriz[l][c] = 0;
	}
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
}