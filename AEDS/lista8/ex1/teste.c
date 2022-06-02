#include <stdio.h>
#include <string.h>

int main(void){

   char vetor[100];
    scanf("%[^\n]", vetor);

    int v = (int) strlen(vetor);

    printf("%d", v);

}