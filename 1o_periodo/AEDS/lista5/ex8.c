/*Faça  um  programa  que  
leia  três  valores  inteiros  e  
chame  uma  função  que  receba  estes  3 valores de entrada e 
retorne eles ordenados, ou seja, 
o menor valor na primeira variável, o 
segundo menor valor na variável do meio, e 
o maior valor na última variável. 

A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir 
os valores ordenados na tela no programa principal.*/

#include <stdio.h>
#include <math.h>

int ordenar(int *p1, int *p2, int *p3){

    int temp;
    
    if (*p1 == p2 && p2 == p3) return 1;
    
    //ordem: p1 p2 p3
    if (*p3 > *p2 && *p2 > *p1) return 0;
    
    //ordem: p1 p3 p2
    if (*p3 < *p1 && *p1 < *p2){

        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        return 0;
    }
    //ordem: p2 p1 p3
    if (*p2 > *p1 && *p1 > *p3){

        temp = *p3;
        *p3 = *p2;
        *p2 = temp;
        return 0;
    }

    //ordem: p2 p3 p1
    if (*p2 > *p3 && *p3 > *p1){

        temp = *p3;
        *p3 = *p2;
        *p2 = temp;
        return 0;
    }

    //ordem: p2 p3 p1
    
}

int main(void){

    int x, y, z;

    printf("3 valores inteiros: ");
    scanf(" %d %d %d", &x, &y, &z);

    printf("Função (%d): %d | %d | %d", ordenar(&x, &y, &z), x, y, z);
}