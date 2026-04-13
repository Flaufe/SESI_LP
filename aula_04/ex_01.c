#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, media;
    int i, acimaMedia = 0;

    // Entrada das notas
    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / 10;
    printf("\nMedia da turma: %.2f\n", media);

    // Mostrar notas acima da média
    printf("Notas acima da media:\n");
    for (i = 0; i < 10; i++) {
        if (notas[i] > media) {
            printf("%.2f\n", notas[i]);
            acimaMedia++;
        }
    }
    printf("Quantidade de alunos acima da media: %d\n", acimaMedia);
}