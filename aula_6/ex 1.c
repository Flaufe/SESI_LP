#include<stdio.h>

int main() {

	int matriz[3][3];
	//primeiro for percorre linhas
	for(int l = 0; l < 3; l++) {
		//segundo for percorre colunas
		for(int c = 0; c < 3; c++) {
			printf("\ndigite valor de L- %i e c- %i", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while( l < 3) {
		c=0;
		while(c < 3) {
			printf("\n| %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}
}