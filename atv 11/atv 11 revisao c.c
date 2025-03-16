// a) Qual a diferença entre as estruturas pilha e fila?
// Pilha (Stack): Segue o princípio LIFO (Last In, First Out). O último elemento inserido é o primeiro a ser removido.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int topo;
    int itens[MAX];
} Pilha;

void push(Pilha *p, int valor) {
    if (p->topo == MAX - 1) {
        printf("Pilha cheia\n");
        return;
    }
    p->itens[++(p->topo)] = valor;
}

int pop(Pilha *p) {
    if (p->topo == -1) {
        printf("Pilha vazia\n");
        return -1;
    }
    return p->itens[(p->topo)--];
}

// Fila (Queue): Segue o princípio FIFO (First In, First Out). O primeiro elemento inserido é o primeiro a ser removido.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int frente, tras, itens[MAX];
} Fila;

void enqueue(Fila *f, int valor) {
    if ((f->tras + 1) % MAX == f->frente) {
        printf("Fila cheia\n");
        return;
    }
    f->tras = (f->tras + 1) % MAX;
    f->itens[f->tras] = valor;
}

int dequeue(Fila *f) {
    if (f->frente == f->tras) {
        printf("Fila vazia\n");
        return -1;
    }
    f->frente = (f->frente + 1) % MAX;
    return f->itens[f->frente];
}

// b) Quais as vantagens da fila? Quais suas desvantagens?
// Vantagens:
// Utilizada em sistemas de gerenciamento de tarefas e processos.
// Fácil implementação de algoritmos de agendamento.

// Desvantagens:
// Pode ser menos eficiente em termos de espaço se a implementação não for circular.
// Inserções e remoções não são rápidas como em uma pilha.

// c) Quais as vantagens da pilha? Quais suas desvantagens?
// Vantagens:
// Simples de implementar e entender.
// Operações de inserção e remoção são rápidas.

// Desvantagens:
// Acessar elementos no meio da pilha é ineficiente.
// Pode levar a estouro de pilha em casos de uso intensivo de memória.

// d) Quais as suas aplicações?
// Fila:
// Gerenciamento de tarefas.
// Implementação de algoritmos de agendamento.
// Buffers de dados em sistemas de comunicação.

// Pilha:
// Gerenciamento de execução de funções (chamada de funções recursivas).
// Implementação de algoritmos de backtracking.
// Análise sintática em compiladores.

// e) Qual a diferença deles para a lista?
// Lista: É uma estrutura mais geral que permite inserções, remoções e acesso a elementos em qualquer posição. Pode ser implementada como lista ligada ou lista dupla. Diferente de pilhas e filas, que têm restrições específicas em suas operações.
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node *proximo;
} Node;

void insereInicio(Node **head, int valor) {
    Node *novoNode = (Node*)malloc(sizeof(Node));
    novoNode->valor = valor;
    novoNode->proximo = *head;
    *head = novoNode;
}

void insereFim(Node **head, int valor) {
    Node *novoNode = (Node*)malloc(sizeof(Node));
    novoNode->valor = valor;
    novoNode->proximo = NULL;
    if (*head == NULL) {
        *head = novoNode;
    } else {
        Node *temp = *head;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novoNode;
    }
}