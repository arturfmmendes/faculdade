//Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis. O programa 
//deve comparar os endereços das variáveis e exibir o maior deles
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num1 = 0, num2 = 1;
    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    printf("Números: ");
    scanf(" %d %d", &*p1, &*p2);

    printf("%d | %d", num1, num2);
}