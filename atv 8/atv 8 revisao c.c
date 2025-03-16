#include<stdio.h>

int main (){

 // a) Comportamento da função free
    /*A função free libera a memória alocada dinamicamente, tornando-a disponível para futuras alocações.

    Exemplo:
    */

    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    free(ptr); // Libera a memória alocada
    /*



    b) Uso do ponteiro após free
    Após chamar free, o ponteiro se torna inválido e não deve ser acessado. Para evitar acessos acidentais, atribua NULL ao ponteiro.

    Exemplo:*/

    int *ptr = (int *)malloc(sizeof(int));
    free(ptr);
    ptr = NULL; // Evita acessos acidentais

    /*




    c) Vazamento de memória
    Ocorre quando a memória alocada não é liberada com free, causando consumo desnecessário de RAM.

    Exemplo de vazamento:*/

    void vazamento() {
        
        int *ptr = (int *)malloc(sizeof(int)); 
        *ptr = 42;
        // Esquecer de chamar free aqui causa vazamento
    }

    /*




    
    d) Retorno de malloc quando falha
    Se malloc não conseguir alocar memória, retorna NULL.

    Exemplo:*/

    int *ptr = (int *)malloc(1000000000 * sizeof(int)); // Tentativa de alocar muita memória
    if (ptr == NULL) {
        printf("Falha na alocação de memória\n");
    }
    /*
    e) Explicação da função calloc
    calloc aloca memória para múltiplos elementos e inicializa tudo com zero.

    Exemplo:*/

    int *arr = (int *)calloc(5, sizeof(int)); // Aloca espaço para 5 inteiros, inicializados com 0
     
    
    
    /* 
    
    f)Diferença entre malloc e calloc

    malloc não inicializa a memória.
    calloc inicializa a memória com zeros.
    Exemplo:*/


    int *a = (int *)malloc(5 * sizeof(int)); // Pode conter lixo de memória
    int *b = (int *)calloc(5, sizeof(int)); // Todos os valores serão 0
}