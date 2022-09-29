/*Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0: 
 
            S = 1/1! + 1/2!  + 1/3! + ...+1 /N! 
 
double serie (int n) 
 
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado. */
#include <stdio.h>

float fatorial(int f);

float serie(int num);

int main(void){

    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("S = %f", serie(N));
}

float serie(int num)
{
    float S;
    if(num == 1) return 1;

    S = 1 / fatorial(num);

    return S + serie((num - 1));

    
}

float fatorial(int f){
    
    int fat = 1;
    for (; f > 1; f--)
    {
        fat = fat * f;
    }
    return fat;
}

