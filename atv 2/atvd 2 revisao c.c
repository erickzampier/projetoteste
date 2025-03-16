#include <stdio.h>
#include <stdlib.h>


int main() {
    float nota;
    int frequencia;
    
    
    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);
    printf("Digite a frequência do estudante: ");
    scanf("%d", &frequencia);
    
    if (nota >= 7.0 && frequencia >= 75) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    
    return 0;
    
    
}
