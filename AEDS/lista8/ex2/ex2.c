/* Faça  um  programa  que,  a  partir  de  um 
 texto  digitado  pelo  usuário,  
 imprima  o  texto removendo  todos  os  espaços  em  branco  adicionais  encontrados,  de  modo  que  haja,  no 
máximo, um espaço em branco separando as palavras presentes nesse texto. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getString(char pergunta[]);

int main(void)
{
    //input form user
    char *texto = getString("Digite o texto: \n");

    //passar pelo texto 
    int tamTexto = strlen(texto);

    for (int i = 0; i < tamTexto; i++)
    {
        if (texto[i + 1] == ' ' && texto[i + 2] == ' ')
        {
           //printf("%d", 0);
           while (texto[i + 2] == ' ')
           {
                for (int j = i; texto[j] != '\0'; j++)
                {
                    texto[j + 1] = texto[j + 2];
                }
           }
        }
    }
    printf("%s\n", texto);

    return 0;
}


char * getString(char pergunta[]){
    
    char vetor[100];
    printf("%s", pergunta);
    scanf("%[^\n]", vetor);

    char *v2;
    int tamanho = strlen(vetor);
    for (int i = 0; i <= tamanho; i++){

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