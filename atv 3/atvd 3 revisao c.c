#include <stdio.h>
#include <stdlib.h>

int a = 5;
int b = 11;
float c;

int main(){
	

scanf("%d %d", &a, &b);

if(a > b || !(a > 0)) {
    c = (float)(b / a);
} else {
    c = (float)(a / b);
}

printf("%.2f\n", c);
return 0;
}


/*  O Resultado da sáide depende dos valores fornecidos pelo usuário. 
Se a > b, c = b / a, caso contrário, c = a / b. 
Como b / a e a / b.
