/*Considere um arquivo texto que 

armazene números em ponto flutuante em cada uma de suas 
linhas. 
Escreva um programa em C que determine o valor máximo, o valor mínimo e a média 
desses valores armazenados no arquivo. Imprima esses valores na tela. 
*/
#include <stdio.h>

int main(void)
{
    FILE *arq = fopen("float.txt", "r");
    float num = 0.0;
    

    //ler arquivo e armazenar em arrays de arrays
    
   for (int i = 0; fgets(str, sizeof str, arq) != EOF; i++)
    {
        //fseek(arq, -1, SEEK_CUR);
        fscanf(arq, "%f", &num);
        printf("%f\n", num);

    }

    fclose(arq);
    //valor maximo


    //valor minimo

    //media
}
 