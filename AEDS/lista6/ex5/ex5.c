/*Escreva  um  programa  que  concatene  o  conteúdo  de  dois  arquivos.  O  conteúdo  dos  dois 
arquivos deverá ser adicionado em um terceiro arquivo. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //abrir arquivos
    FILE *arq1 = fopen("arq1.txt", "r");
    FILE *arq2 = fopen("arq2.txt", "r");
    FILE *concatenado = fopen("contatenado.txt", "w");

    char linhasDeTexto1[3][15];
    char linhasDeTexto2[3][15];

    //ler arquivo 1
    for (int i = 0; !feof(arq1); i++)
    {
    //armazenar em arrays de strings (e não é que era matriz, loucura)
        fgets(linhasDeTexto1[i], 15, arq1);
    }
    
    //ler arquivo2
    for (int i = 0; !feof(arq2); i++)
    {
    //armazenar em arrays de strings (e não é que era matriz, loucura)
        fgets(linhasDeTexto2[i], 15, arq2);
    }

    //concatenar arquivos m um terceiro
    for (int i = 0; i < 3; i++)
    {
        fputs(linhasDeTexto1[i], concatenado);
    }

    fprintf(concatenado, "\n");

    for (int i = 0; i < 3; i++)
    {
        fputs(linhasDeTexto2[i], concatenado);
    }
    
    fclose(arq1);
    fclose(arq2);
}