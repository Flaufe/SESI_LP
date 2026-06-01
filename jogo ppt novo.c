#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Jogador {
    char nome[30];
    int vitorias;
    int derrotas;
    int empates;
    int pontos;
};

struct Jogador ranking[100];
int totalJogadores = 0;

void menu() {

    printf("\n=================================\n");
    printf("      PEDRA PAPEL TESOURA\n");
    printf("=================================\n");

    printf("1 - Jogar\n");
    printf("2 - Regras\n");
    printf("3 - Ranking\n");
    printf("4 - Par ou Impar\n");
    printf("5 - Estatisticas\n");
    printf("0 - Sair\n\n");
}

void regras() {

    printf("\nREGRAS DO JOGO:\n");
    printf("Pedra ganha da Tesoura\n");
    printf("Tesoura ganha do Papel\n");
    printf("Papel ganha da Pedra\n\n");
}

void mostrarEscolha(int valor) {

    if(valor == 1)
        printf("Pedra");

    else if(valor == 2)
        printf("Papel");

    else if(valor == 3)
        printf("Tesoura");
}

int buscarJogador(char nome[]) {

    int i;

    for(i = 0; i < totalJogadores; i++) {

        if(strcmp(ranking[i].nome, nome) == 0)
            return i;
    }

    return -1;
}

void mostrarRanking() {

    int i, j;
    struct Jogador aux;

    for(i = 0; i < totalJogadores - 1; i++) {

        for(j = i + 1; j < totalJogadores; j++) {

            if(ranking[j].pontos > ranking[i].pontos) {

                aux = ranking[i];
                ranking[i] = ranking[j];
                ranking[j] = aux;
            }
        }
    }

    printf("\n===== PODIO =====\n\n");

    for(i = 0; i < totalJogadores; i++) {

        printf("%dº %s - %d pontos\n",
               i + 1,
               ranking[i].nome,
               ranking[i].pontos);
    }
}

void estatisticas() {

    int i;

    printf("\n===== ESTATISTICAS =====\n");

    for(i = 0; i < totalJogadores; i++) {

        printf("\nJogador: %s", ranking[i].nome);
        printf("\nVitorias: %d", ranking[i].vitorias);
        printf("\nDerrotas: %d", ranking[i].derrotas);
        printf("\nEmpates: %d", ranking[i].empates);
        printf("\nPontos: %d\n", ranking[i].pontos);
    }
}

void jogar() {

    char nome[30];
    int jogador;
    int computador;
    int dificuldade;
    int indice;
    int chance;

    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    indice = buscarJogador(nome);

    if(indice == -1) {

        strcpy(ranking[totalJogadores].nome, nome);
        ranking[totalJogadores].vitorias = 0;
        ranking[totalJogadores].derrotas = 0;
        ranking[totalJogadores].empates = 0;
        ranking[totalJogadores].pontos = 0;

        indice = totalJogadores;
        totalJogadores++;
    }

    printf("\nEscolha a dificuldade:\n");
    printf("1 - Facil\n");
    printf("2 - Medio\n");
    printf("3 - Dificil\n");

    printf("Opcao: ");
    scanf("%d", &dificuldade);

    printf("\n1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");

    printf("\nEscolha: ");
    scanf("%d", &jogador);

    if(jogador < 1 || jogador > 3) {

        printf("\nOpcao nao existe\n");
        return;
    }

    chance = rand() % 100;

    if(dificuldade == 1) {

        computador = (rand() % 3) + 1;
    }

    else if(dificuldade == 2) {

        if(chance < 40) {

            if(jogador == 1)
                computador = 2;

            else if(jogador == 2)
                computador = 3;

            else
                computador = 1;
        }

        else {

            computador = (rand() % 3) + 1;
        }
    }

    else {

        if(chance < 70) {

            if(jogador == 1)
                computador = 2;

            else if(jogador == 2)
                computador = 3;

            else
                computador = 1;
        }

        else {

            computador = (rand() % 3) + 1;
        }
    }

    printf("\n=================================\n");

    printf("VOCE ESCOLHEU: ");
    mostrarEscolha(jogador);

    printf("\nPC ESCOLHEU: ");
    mostrarEscolha(computador);

    printf("\n\n");

    if(jogador == computador) {

        printf("EMPATE!\n");

        ranking[indice].empates++;
        ranking[indice].pontos += 1;
    }

    else if(
        (jogador == 1 && computador == 3) ||
        (jogador == 2 && computador == 1) ||
        (jogador == 3 && computador == 2)
    ) {

        printf("ARRASOU, VOCE VENCEU!\n");

        ranking[indice].vitorias++;
        ranking[indice].pontos += 3;
    }

    else {

        printf("O PC VENCEU!\n");

        ranking[indice].derrotas++;
    }

    printf("=================================\n");
}

void parOuImpar() {

    int escolha;
    int jogador;
    int computador;
    int soma;

    printf("\n===== PAR OU IMPAR =====\n");

    printf("1 - Par\n");
    printf("2 - Impar\n");

    printf("Escolha: ");
    scanf("%d", &escolha);

    printf("Digite um numero: ");
    scanf("%d", &jogador);

    computador = rand() % 11;

    soma = jogador + computador;

    printf("\nComputador escolheu: %d\n", computador);
    printf("Soma = %d\n", soma);

    if((soma % 2 == 0 && escolha == 1) ||
       (soma % 2 != 0 && escolha == 2)) {

        printf("VOCE VENCEU!\n");
    }

    else {

        printf("O PC VENCEU!\n");
    }
}

int main() {

    int opcao;

    srand(time(NULL));

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

            case 3:
                mostrarRanking();
                break;

            case 4:
                parOuImpar();
                break;

            case 5:
                estatisticas();
                break;

            case 0:
                printf("\nEncerrando o jogo...\n");
                break;

            default:
                printf("\nNumero invalido.\n");
        }

    } while(opcao != 0);

    return 0;
}