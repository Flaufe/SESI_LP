int main(){
    float n1, n2, soma;
    
    printf("digite um numero:");
    scanf("%f", &n1);
    
    printf("digite o segundo numero:");
    scanf("%f", &n2);
    
    soma = n1 + n2;
    
    printf("%.2f + %.2f = %.2f", n1, n2, soma);
}