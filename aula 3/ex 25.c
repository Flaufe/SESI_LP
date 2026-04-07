#include<stdio.h>
void main()
{
    int opcao = 0, valor, resto, n100, n50, n20, n10, n5, n1;

    while (opcao != 2){
        printf("\n****************************\n");
        printf("       CAIXA ELETRONICO       \n");
        printf("******************************\n");
        printf("1 - Realizar Saque\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        if (opcao == 1){
            printf("\nDigite o valor do saque: R$ ");
            scanf("%i", &valor);

            while (valor <= 0){
                printf("Valor invalido! Digite um valor positivo: R$ ");
                scanf("%i", &valor);
            }
            n100 = valor / 100;
            resto = valor % 100;

            n50 = resto / 50;
            resto = resto % 50;

            n20 = resto / 20;
            resto = resto % 20;

            n10 = resto / 10;
            resto = resto % 10;

            n5 = resto / 5;
            n1 = resto % 5;

            printf("\n--- Retire suas notas --- \n");
            if (n100 > 0) printf("- %i nota(s) de R$ 100\n", n100);
            if (n50 > 0)  printf("- %i nota(s) de R$ 50\n", n50);
            if (n20 > 0)  printf("- %i nota(s) de R$ 20\n", n20);
            if (n10 > 0)  printf("- %i nota(s) de R$ 10\n", n10);
            if (n5 > 0)   printf("- %i nota(s) de R$ 5\n", n5);
            if (n1 > 0)   printf("- %i nota(s) de R$ 1\n", n1);
            
            printf("--------------------------\n");
        } 
        else if (opcao == 2){
            printf("Encerrando... Obrigado por usar nosso banco!\n");
        } 
        else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }
}