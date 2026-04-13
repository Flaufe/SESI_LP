#include <stdio.h>

int main() {
    int idades[15];
    int o;
    int jovens = 0, adultos = 0, idosos = 0;

    for (o = 0; o < 15; o++) {
        printf("Digite a idade da pessoa %d: ", o + 1);
        scanf("%d", &idades[o]);

        if (idades[o] <= 17) {
            jovens++;
        } else if (idades[o] <= 59) {
            adultos++;
        } else {
            idosos++;
        }
    }

    printf("\nQuantidade de jovens (ate 17): %d\n", jovens);
    printf("Quantidade de adultos (18 a 59): %d\n", adultos);
    printf("Quantidade de idosos (60+): %d\n", idosos);

    if (jovens > adultos && jovens > idosos) {
        printf("O grupo com maior quantidade e: Jovens\n");
    } else if (adultos > jovens && adultos > idosos) {
        printf("O grupo com maior quantidade e: Adultos\n");
    } else if (idosos > jovens && idosos > adultos) {
        printf("O grupo com maior quantidade e: Idosos\n");
    } else {
        printf("Ha empate entre dois ou mais grupos.\n");
    }
}