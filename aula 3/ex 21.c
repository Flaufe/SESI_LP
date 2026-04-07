#include<stdio.h>
void main()
{
	int opcao = 0;
	while (opcao != 3) {
		printf("\n--- MENU ---\n");
		printf("1: Dizer Ola\n");
		printf("2: Dizer Tudo bem?\n");
		printf("3: Sair\n");
		printf("Escolha uma opcao (em numero): ");
		scanf("%d", &opcao);

		if (opcao == 1) {
			printf("Ola!\n");
		} else if (opcao == 2) {
			printf("Tudo bem?\n");
		} else if (opcao == 3) {
			printf("Saindo...\n");
		} else {
			printf("Opcao invalida!\n");
		}
	}
}