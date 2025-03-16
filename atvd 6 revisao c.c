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

