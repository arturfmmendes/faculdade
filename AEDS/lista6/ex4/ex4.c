
/*mplemente um programa que 
 e 
imprima, linha a linha, o seu conteúdo na tela. 
Imprima também a quantidade de linhas que este arquivo possui.*/

#include <stdio.h>
#include <string.h>

int main(void) {
   
    FILE *arq = fopen("arq.txt", "r");
    char frase[100];
    int linhas = 0;
    //leia um arquivo texto
    while (!feof(arq))
    {
        fgets(frase, 100, arq);
        //imprima linha a linha
        printf("%s", frase);
        //atualiza o numero de lknhas
        linhas++;
    }
    //imprima o numero de linhas
    printf("\n\nNumero de linhas: %d", linhas);

    fclose(arq);
}

    