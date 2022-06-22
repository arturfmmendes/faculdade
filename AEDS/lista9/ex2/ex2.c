//
/* Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço 
de um eletrodoméstico. Desenvolver um algoritmo que permita exibir qual foi a média dos 
preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava 
abaixo da média.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct registro{
    char nome[50];
    char telefone[15];
    float preco;
}registro;

char * getString(char pergunta[100]);

int getInt(char pergunta[]);

float mediaPrecos(registro *loja, int taman);

void relacaoLojas(registro *loj, int tam);




//---------------------------------------------------------------------------------
int main(void)
{
    //criar o registro padrao 
    registro lojas[] = {
            {"Salim's shop", "(21)992315434", 141.60}, 
            {"Eris's shop", "(31)985434323", 190.65}, 
            {"Tuzim's jhin", "(31)988377108", 137.50}
        };
    
    int opcao;
    do
    {
        opcao = getInt("1 - media dos precos cadastrados\n2 - relacao das lojas com preco abaixo da media\n");
    }
    while (opcao < 1 || opcao > 2);

    float tamanho = sizeof(lojas) / sizeof(lojas[0]);

    switch (opcao)
    {
        case 1:
            printf("%f", mediaPrecos(lojas,tamanho));
            break;
        case 2:
            relacaoLojas(lojas, tamanho);
            break;
    }
    return 0;
}
//------------------------------------------------------------------------------------

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

float mediaPrecos(registro *loja, int taman)
{
    float totalPrecos = 0;
    
    for (int i = 0; i <  taman; i++)
    {
        totalPrecos += loja[i].preco;
    }
    float media = totalPrecos / taman;
    return media;
}

void relacaoLojas(registro *loj, int tam)
{
    float med = mediaPrecos(loj, tam);
    int j = 0;
    for (int i = 0; i <  tam; i++)
    {
        
        if (loj[i].preco < med)
        {
            printf("%s - %s\n", loj[i].nome, loj[i].telefone);
        }
    }
}
