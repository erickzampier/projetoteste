#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));

    printf("Nome: ");
    scanf("%s", aluno->nome);
    printf("Faltas: ");
    scanf("%d", &aluno->faltas);
    printf("Nota: ");
    scanf("%f", &aluno->nota);

    printf("%s - %s\n", aluno->nome, (aluno->nota >= 7 && aluno->faltas < 25) ? "Aprovado" : "Reprovado");

    free(aluno);
    return 0;
}