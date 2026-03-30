#include<stdio.h>

int main(){
    float n1, n2, n3, media;
    printf("digite sua primeira nota:");
    scanf("%f", &n1);
    printf("digite sua segunda nota:");
    scanf("%F", &n2);
    printf("digite sua terceira nota:");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    
    if(media >= 7.0){
        printf("aprovado");
    }else if (media >= 2.9){;
        printf("reprovado");
    }else{
        printf("recuperação");
    }
}