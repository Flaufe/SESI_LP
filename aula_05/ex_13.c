#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int cont, maiorCont = 0, repeticao = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        cont = 0;

        for(j = 0; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                cont++;
            }
        }

        if(cont > maiorCont) {
            maiorCont = cont;
            repeticao = vetor[i];
        }
    }

    if(maiorCont == 1) {
        printf("\nNenhum numero se repete.\n");
    } else {
        printf("\nNumero que mais se repete: %d\n", repeticao);
        printf("Quantidade de repeticoes: %d\n", maiorCont);
    }
}