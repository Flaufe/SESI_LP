#include<stdio.h>

int main(){
	int idade;

	printf("digite sua idade: ");
	scanf("%i", &idade);

	if(idade < 16){
		printf("nao pode votar");
	}
	else if ((idade >= 16 && idade <= 17) || idade > 70){
        printf("Voto opcional");
	}
	else if (idade >= 18 && idade <= 70){
		printf("obrigatorio votar");
	}
}