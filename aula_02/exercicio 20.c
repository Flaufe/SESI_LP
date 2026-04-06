#include<stdio.h>
    
    int main(){
        int km;
   
   printf("digite a velocidade: ");
   scanf("%i", &km);
   
   if(km <= 60){
       printf("fique deboa");
   }
   else if(km > 60 && km < 80){
       printf("multa leve");
   }
   else if(km > 81 && km < 100){
       printf("multa grave");
   }
   else if(km > 100){
       printf("multa gravissima");
   }
}