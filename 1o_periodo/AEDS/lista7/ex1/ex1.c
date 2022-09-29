/*Faça um procedimento que 
receba e preencha um vetor com as notas de uma turma de 10 alunos. 

Faça um outro procedimento que receba um vetor preenchido com as notas, 
calcule a média da turma e conte quantos alunos obtiveram nota acima da média. 

Esse procedimento deve exibir a média e o resultado da contagem. 
Faça um programa que declare as devidas variáveis e acione os procedimentos. */
#include <stdio.h>
#include <stdbool.h>

void recebeNotas(float *pNotas);

void aprovados(float *p2Notas);

int main(void)
{
    
    float notas[10];
    
    recebeNotas(notas);

    aprovados(notas);

    return 0;
    //procedimento que receba notas de uma turma de 10 alunos e coloca em vetor
}

void recebeNotas(float *pNotas)
{
    //repete acrescentando ao valor da nota igual a i
    for(int i = 0; i < 10; i++) 
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &pNotas[i]);
    }
}

void aprovados(float *p2Notas)
{
    int aprovados = 0;
    float soma = 0;

    for (int i = 0; i < 10; i++) 
    {
        soma += p2Notas[i];
        
        if (p2Notas[i] >= 6) aprovados++;
    }
    //média
    float mediaTotal = soma / 10;

    printf("\n\nMédia total das notas da turma: %.2f", mediaTotal);
    printf("\nAlunos aprovados: %d", aprovados);
}