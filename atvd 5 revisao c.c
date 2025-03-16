#include <stdio.h>
#include <stdlib.h>



//  a)Explique o funcionamento de um vetor e como ele é tratado no C.
//  Um vetor é uma sequência de elementos do mesmo tipo, armazenados de forma contínua na memória, e acessados por índices.
//  Para explicar o vetor, fiz o seguinte código abaixo:

int main(){

    int numeros[3] = {30, 40, 50};
    printf("%d\n", numeros[0]); // PRIMEIRO ELEMENTO (30).
    printf("%d\n", numeros[1]); // SEGUNDO ELEMENTO (40).
    printf("%d\n", numeros[2]); // TERCEIRO ELEMENTO (50)

printf("\n\n\n");

//  b)Explique o que uma stringe como ela é tratada em C.
//  Uma string é um vetor de caracteres terminado com o caractere especial \0 (nulo)

char nome[10] = "Carlos";
	printf("%s\n", nome);

}
