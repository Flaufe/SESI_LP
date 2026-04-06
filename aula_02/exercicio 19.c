#include <stdio.h>

int main(){
    float peso, valor;

    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    if(peso <= 5){
        valor = 10;
    }
    else if (peso <= 20){
        valor = 20;
    }
    else{
        valor = 50;
    }

    printf("Valor do frete: R$ %.2f\n", valor);
}