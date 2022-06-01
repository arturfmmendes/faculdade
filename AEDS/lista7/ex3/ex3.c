/*  Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando 
as posições de 0 a 9 em cada vetor). 

Faça um outro procedimento que receba dois vetores preenchidos  e  gera  um  novo  vetor  com  os  elementos  
desses  2  vetores  intercalados  de  tal forma que nas posições ímpares do novo vetor estejam os elementos do 
primeiro vetor e nas posições pares os elementos do segundo vetor recebido por parâmetro. 

Faça um procedimento  que  receba  e  exiba  o  conteúdo  de  um  vetor.  Faça  um  programa  que  faça  as 
devidas declarações e acione os módulos para exemplificar o seu uso.*/
#include <stdio.h> 
#include <stdlib.h>

void preencheVetores(int vetor1[], int vetor2[]);
void intercalarVetores(int veto1[], int veto2[], int result[]);
void exibeVetor(int vet[]);

int main(void)
{

    int numerosX[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int numerosY[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int resultante[20];
    int intercalado[10];

    preencheVetores(numerosX, numerosY);

    //receba 2 vetores preenchidos e gera um novo vetor com os elementos desses 2 vetores intercalados 
    intercalarVetores(numerosX, numerosY, resultante);

    //exibe conteudo de um vetor
    exibeVetor(resultante);
}

void preencheVetores(int vetor1[], int vetor2[])
{
    for(int i = 0; i < sizeof vetor1; i++)
    {
        printf("VETOR 1 DÍGITO %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for(int i = 0; i < sizeof vetor2; i++)
    {
        printf("VETOR 2 DÍGITO %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
}

void intercalarVetores(int veto1[],int veto2[], int result[])
{
    int v1 = 0;
    int v2 = 0;

    for (int i = 0; i < 20; i++)
    {
        //se i % 2 == 0 entao assimila veto1[i]  no vetor resultante
        if (i % 2 == 0) {
            result[i] = veto1[v1];
            v1++;
        }
        //se i % 2 != 0 entao assimila veto2[i]  no vetor result
        else {
            result[i] = veto2[v2];
            v2++;
        }
    }
}

void exibeVetor(int vet[])
{
    for (int i = 0; i < 20; i++) printf("%d\n", vet[i]);
}