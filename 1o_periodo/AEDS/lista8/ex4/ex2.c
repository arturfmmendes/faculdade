/* Faça  um  programa  que,  a  partir  de  um 
 texto  digitado  pelo  usuário,  
 imprima  o  texto removendo  todos  os  espaços  em  branco  adicionais  encontrados,  de  modo  que  haja,  no 
máximo, um espaço em branco separando as palavras presentes nesse texto. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tiraEspacos(char texto[])
{
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

