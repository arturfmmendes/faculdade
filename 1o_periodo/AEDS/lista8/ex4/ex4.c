/*Palíndromo. Um palíndromo é uma  sequência de caracteres cuja leitura é idêntica se feita
da direita para esquerda ou vice−versa. Por exemplo: OSSO e OVO são palíndromos. Em
textos mais complexos os espaços e pontuação são ignorados. A frase SUBI NO ONIBUS
é o exemplo de uma frase palíndroma onde os espaços foram ignorados. Faça um programa
que leia uma sequência de caracteres, mostre−a e diga se é um palíndromo ou não. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char * getString(char pergunta[100]);

void tiraEspacos(char *texto);

int main(void)
{
    int palimdromo = 0;

    // input user
    char *frase = getString("Frase: ");

    //tirar os espacos
    tiraEspacos(frase);

    // verificar o tamanho da string
    int tamanho = strlen(frase);

    // dividir o tamano por 2 e trar mais 1 para saber atge qual elemento é o meio da string (arredondado para cima)  
    int tamPor2 = floor(tamanho / 2);
    //se ate a metade da string for igual asegunda metade
    //passar por metade do vetor(arredondado para baixo)
        //verificar se a 
    for (int i = 0; i < tamPor2; i++)
    {    
        if (frase[i] == frase[tamanho - 1 - i]) palimdromo++;
    }
    
     //imprimir sim ou nao
    if (palimdromo == tamPor2) printf("Sim\n");
    else printf("Nao\n");
   

}

void tiraEspacos(char *texto)
{
    //passar pelo texto 
    int tamTexto = strlen(texto);

    for (int i = 0; i < tamTexto; i++)
    {
        if (texto[i + 1] == ' ')
        {
           //printf("%d", 0);
           while (texto[i + 1] == ' ')
           {
                for (int j = i; texto[j] != '\0'; j++)
                {
                    texto[j + 1] = texto[j + 2];
                }
           }
        }
    }
}


char * getString(char pergunta[100])
{

    char vetor[100];
    printf("%s", pergunta);
    scanf("%[^\n]", vetor);

    char *v2;
    int tamanho = strlen(vetor);
    for (int i = 0; i <= tamanho; i++)
    {

        if (i == 0)
        {
            v2 = malloc(sizeof(char));
            *v2 = vetor[i];
            continue;
        }

        realloc(v2, i + 1);
        *(v2 + i) = vetor[i];
    }

    return v2;
}
