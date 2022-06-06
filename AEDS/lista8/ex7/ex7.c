/* Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 
32 dos caracteres cujo código ASCII esta entre 65 e 90.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char * getString(char pergunta[100]);

int main(void)
{
    char *cadeia = getString("Cadeia de caracteres \n");

    int tam = strlen(cadeia);
    
    for (int i = 0; i < tam; i++)
    {
        if (cadeia[i] <= 122 && cadeia[i] >= 97) cadeia[i] -= 32;
    }

    printf("%s", cadeia);
}

char * getString(char pergunta[100]){
       
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