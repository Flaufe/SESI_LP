#include<stdio.h>

float main() {
	float nota;

	printf("digite sua nota: ");
	scanf("%f", &nota);

	if (nota >= 7) {
		printf("aprovado!");
	} else if (nota >= 5 && nota <= 6.9) {
		printf("recuperação!");
	} else if (nota < 5) {
		printf("reprovado!");
	}



}