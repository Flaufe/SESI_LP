#include <stdio.h>

int main() {
    int valores[12];
    int i;
    int crescente = 1, decrescente = 1;

    for (i = 0; i < 12; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    for (i = 0; i < 11; i++) {
        if (valores[i] > valores[i + 1]) {
            crescente = 0;
        }
        if (valores[i] < valores[i + 1]) {
            decrescente = 0;
        }
    }

    if (crescente) {
        printf("Os valores estao em ordem crescente.\n");
    } else if (decrescente) {
        printf("Os valores estao em ordem decrescente.\n");
    } else {
        printf("Os valores estao desordenados.\n");
    }
}