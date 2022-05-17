/* Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto. Onde
N é uma quantidade de letras definida pelo usuário. Depois de inseridas as N letras, o
programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de vogais,
ou seja, quantas letras a, e, i, o, u*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{

    int N;
    int vogais = 0;
    char c = '0';
    char texto[12];
    FILE *arq = fopen("arq.txt", "w");

    // inserir letras no arquivo
    printf("O que sera escrito no arquivo: ");
    scanf("%[^\n]s", texto);

    fprintf(arq, "%s", texto);

    fclose(arq);
    arq = fopen("arq.txt", "r");

    // ler as letras do arquivo
    while (c != EOF)
    {
        c = fgetc(arq);
        printf("%c", c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') vogais++;
    }

    // imprimi-las na tela
    printf("Numero de vogais: %d", vogais);

    fclose(arq);
    return 0;
}