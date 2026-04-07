#include<stdio.h>
void main()
{
	int senha, senha_correta = 1234;
    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != senha_correta){
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &senha);
    }
    printf("Acesso permitido!\n");
}