/*Escreva um programa em C que declare variáveis para armazenar 
valor inteiro
valor real
 caracter  
 Deve  existir  no  programa  ponteiros  associados  a  cada  um  deles.  O 
programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando 
os respectivos ponteiros. 
Exiba os 
endereços e 
os conteúdos de 
todas as variáveis e ponteiros 
antes e após a alteração. 
*/
#include <stdio.h>

int main(void)
{
    int inteiro = 0;
    int *pint = &inteiro;

    float real = 0;
    float *pReal = &real;

    char caractere = 0;
    char *pChar = &caractere;


    printf("Troque o valor de inteiro, real e caractere: ");
    scanf(" %d %f %c", &*pint, &*pReal, &*pChar);

    printf("Inteiro: %d | Real: %f | Char: %c", inteiro, real, caractere);

}