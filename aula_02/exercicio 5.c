#include<stdio.h>

int main(){
	float vlr_compra, vlr_desconto;
	
	printf("digite o valor de compra: ");
	scanf("%f", &vlr_compra);
	
	if(vlr_compra > 100){
	    vlr_desconto = vlr_compra * 0.10;
	}else{
	    vlr_desconto = vlr_compra * 0.05;
	}
	
	printf("***********************************\n");
	printf("preco do produto: %.2f\n", vlr_compra);
	printf("valor do desconto: %.2f\n", vlr_desconto);
	printf("valor final: %.2f\n", vlr_compra - vlr_desconto);
	printf("***********************************\n");
}

