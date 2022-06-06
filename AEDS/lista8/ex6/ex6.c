/* Escreva  um  programa  para  ler  uma  palavra.  A  seguir  escrever  a  palavra  lida  na  diagonal, 
com uma letra em cada linha conforme o exemplo abaixo. 
 
Exemplo 
E 
  x 
     e 
        m 
            p 
               l 
                 o
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getString(char pergunta[100]);

int main(void)
{

   //input from user
   char *palavra = getString("Digite a palavra a ser desmembrada e espalhada :(\n");

   //enquanto a palvra nao acabar
   for (int i = 0; palavra[i] != '\0'; i++)
   {
      //print letra[i] e [\n + (' ' * i)]
      printf("%c", palavra[i])/
      printf("\n");
      for (int j = 0; j <= i; j++)
      {
         printf("  ");
      }
   }
      
   return 0;
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