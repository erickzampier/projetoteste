#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

aluno_t *aluno_root = NULL;

void adicionarAluno(char nome[], int faltas, float nota) {
    aluno_t *novo = (aluno_t *)malloc(sizeof(aluno_t));
    strcpy(novo->nome, nome);
    novo->faltas = faltas;
    novo->nota = nota;
    novo->prox = aluno_root;
    aluno_root = novo;
}

void listarAlunos() {
    aluno_t *atual = aluno_root;
    while (atual) {
        printf("%s - %s\n", atual->nome, (atual->nota >= 7 && atual->faltas < 25) ? "Aprovado" : "Reprovado");
        atual = atual->prox;
    }
}

int main() {
    adicionarAluno("João", 20, 8.5);
    listarAlunos();
    return 0;
}