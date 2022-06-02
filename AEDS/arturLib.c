#include <stdio.h>
#include <stdlib.h>

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
