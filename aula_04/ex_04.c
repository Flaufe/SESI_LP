#include <stdio.h>

int main() {
    int numeros[10];
    int i, j;
    int contador, dominante = 0, encontrado = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for (i = 0; i < 10; i++) {
        contador = 0;

        for (j = 0; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contador++;
            }
        }

        if (contador > 5) {
            dominante = numeros[i];
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Valor dominante: %d\n", dominante);
    } else {
        printf("Nao existe valor dominante.\n");
    }

}