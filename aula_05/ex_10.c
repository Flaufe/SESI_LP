#include <stdio.h>

int main() {
    int n[10];
    int i;
    int aux;
    int f;

    printf("Digite 10 numeros:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
    }

    for(i = 0; i < 9; i++) {
        for(f = i + 1; f < 10; f++) {
            if(n[i] > n[f]) {
                aux = n[i];
                n[i] = n[f];
                n[f] = aux;
            }
        }
    }

    printf("\nNumeros em ordem crescente:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }
}