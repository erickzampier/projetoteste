#include <stdio.h> // Fun��es de entrada e sa�da de dados
#include <stdlib.h>


int main() {
    int i;

    i = 0;

    // While verifica primeiro, depois executa
    while (i < 10) {
        printf("while: %d\n", i);
        i++;
    }

    // Do executa primeiro, depois verifica
    do {
        printf("do: %d\n", i);
        i++;
    } while (i < 10);

    return 0;
}

// a) Qual a sa�da do programa acima?
/* O Resultado dessa sa�da vai ser: 

while: 0
while: 1
while: 2
while: 3
while: 4
while: 5
while: 6
while: 7
while: 8
while: 9
do: 10

b) Qual a diferen�a entre o while e do do.while?


 o while simples ele só ira executar o bloco de codigo após verificar a condição
 o do while irá executar uma vez e depois que vai verificar a condição


 c) Como fica a implementação do bloco

    implementação do bloco while:

        int i = 0;

        while (i < 10) {
            printf("while: %d\n", i);
            i++;
        }

    implementação do bloco do-while:

        do {
            printf("do: %d\n", i);
            i++;
        } while (i < 10);
         

d) Qual a diferença entre while e for? Quando usar um ou outro?

    while é usado quando o número de repetições não é conhecido antes e depende de uma condição que pode ser alterada
    for é quando o o número de repetições é conhecido antes ou é definido por um contador

    Use While: 

    Quando a execução depender de uma condição dinâmica.

    Exemplo:

    c
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
        
    Use for:

    Quando o loop tiver uma estrutura fixa (inicialização, condição, incremento/decremento).

    Exemplo:

    
    for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
    }
