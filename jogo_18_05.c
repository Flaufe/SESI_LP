//JOGO: PEDRA, PAPEL E TESOURA - Eduarda, Flauren e Emily.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
    
        //MENU
        
    printf("\n==== PEDRA, PAPEL E TESOURA ====\n");
    printf("1 - Jogar\n");
    printf("2 - Regras\n");
    printf("0 - Sair\n\n");

}

void regras() {
    
        //REGRAS
        
    printf("\nREGRAS DO JOGO:\n");
    printf("Pedra ganha da Tesoura\n");
    printf("Tesoura ganha do Papel\n");
    printf("Papel ganha da Pedra\n\n");

}

void mostrarEscolha(int valor) {

    if(valor == 1) {

        printf("Pedra");

    }

    else if(valor == 2) {

        printf("Papel");

    }

    else if(valor == 3) {

        printf("Tesoura");

    }
}

void jogar() {

    int jogador;
    int computador;

    srand(time(NULL));

    printf("\n1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");

    printf("\nEscolha: ");
    scanf("%d", &jogador);

    if(jogador < 1 || jogador > 3) {

        printf("\nOpcao nao existe\n");
        return;

    }

    computador = (rand() % 3) + 1;

    printf("\nVoce escolheu: ");
    mostrarEscolha(jogador);

    printf("\nComputador escolheu: ");
    mostrarEscolha(computador);

    printf("\n\n");

    if(jogador == computador) {

        printf("EMPATE!TENTE OUTRA VEZ.\n");

    }

    else if(
        (jogador == 1 && computador == 3) ||
        (jogador == 2 && computador == 1) ||
        (jogador == 3 && computador == 2)
    ) {

        printf("ARRASOU, VOCE VENCEU!\n");

    }

    else {

        printf("O PC VENCEU!\n");

    }
}

int main() {

    int opcao;

    do {

        menu();

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                jogar();
                break;

            case 2:
                regras();
                break;

            case 0:
                printf("\nEncerrando o jogo...\n");
                break;

            default:
                printf("\nNumero invalido, escolha 1, 2 ou 0.\n");

        }

    } while(opcao != 0);

}

//EXPLICAÇÃO DO PQ O PC PERDE MAIS DO QUE GANHA: as partidas sao iniciadas muito 
//rapido e o sistema usa o mesmo horario para gerar os numeros, o que acaba repetindo.





