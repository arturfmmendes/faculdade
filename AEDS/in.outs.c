#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    realloc(v2, sizeof(v2) + 1);
    v2[sizeof(v2) - 1] = '\0';

    return v2;
}

int getInt(char pergunta[]){

    int integer;

    printf("%s", pergunta);
    scanf("%i", &integer);

    return integer;

}

int getLong(char pergunta[]){

    int LongInt;

    printf("%s", pergunta);
    scanf("%i", &LongInt);

    return LongInt;

}


float getFloat(char pergunta[]){
    
    float floating;

    printf("%s", pergunta);
    scanf("%i", &floating);

    return floating;

}


