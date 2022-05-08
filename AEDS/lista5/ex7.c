/*Faça  um  programa  que  leia  dois  valores  inteiros  
e  chame  uma  função  que  receba  estes  2 valores de entrada e 
retorne o maior valor na primeira variável e o menor valor na segunda variável. 
Escreva o conteúdo das 2 variáveis na tela no programa principal.*/
#include <stdio.h>
#include <math.h>

int organizar(int *px, int *py){

    int temp;

    if (*px < *py){
        
        temp = *px;
        *px = *py;
        *py = temp;

    }
    return 0;
}

int main(void){

    int x, y;
    

    printf("Dois valores inteiros: ");
    scanf(" %d %d", &x, &y);

    organizar(&x, &y);

    printf(" %d %d", x, y);
}

