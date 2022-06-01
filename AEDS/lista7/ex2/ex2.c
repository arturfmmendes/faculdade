/* Faça um procedimento que preencha um vetor X de 10 elementos. A seguir faça uma 

função
que receba um vetor preenchido, 
teste e copie todos os valores negativos deste vetor para um
novo vetor (sem deixar elementos vazios entre os valores copiados), retornando este vetor
como resultado. 

Faça um procedimento que recebe e exibe o conteúdo de um vetor. Faça um
programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso.*/
#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int vetor[]);

int * testaNegativos(int nums[], int * n);

int main(void)
{
    int numeros[10]; // = {1, 2, 3, 4, -5, -6, -7, -8, -9, -10};
    int n;
    // procedimento: recebe um vetor de 10 elem. para ir por cada endereco do vetor e assimila o valor digitado
    preencheVetor(numeros);
    // funcao: recebe vetor e passa pelos enderecos do vetor. 
    int *negativosDoVetor = testaNegativos(numeros, &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", negativosDoVetor[i]);
    }
}

void preencheVetor(int vetor[])
{
    
    for (int i = 0; i < 10; i++)
    {
        printf("Valor %d", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int * testaNegativos(int nums[], int * n)
{
    int *pR;
    int negativos = 0;


    for (int i = 0; i < 10; i++)
    {
        if (nums[i] < 0)
        {
            if (negativos == 0)
            {
                pR = (int *) malloc(sizeof(int));
                *pR = nums[i];
            }
            else
            {
                pR = realloc(pR, (negativos + 1) * sizeof(int));
                *(pR + negativos) = nums[i];
            }
            negativos++;
        }
    }
    *n = negativos;
    return pR;
}