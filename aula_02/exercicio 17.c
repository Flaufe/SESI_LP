#include<stdio.h>

int main(){
    int temperatura;
    
    printf("digite a temperatura: ");
    scanf("%i", &temperatura);
    
    if (temperatura < 15){
    printf("frio");
    }
    else if (temperatura >= 15 && temperatura <= 25){
    printf("agradavel");
    }
    else if (temperatura > 25){
    printf("calor");
    }
}