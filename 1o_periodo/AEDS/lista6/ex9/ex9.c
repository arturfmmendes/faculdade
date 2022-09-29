#include <stdio.h>
#include <stdlib.h>

void adicionaAlunos(FILE *arq1);

void leitorAlunos(FILE *arq2);

void apagaTudo(FILE *arq3);

int main(void)
{
   FILE *BDAlunos;
   int opcao; 

    do
    {
        printf("1 - Adicionar alunos\n");
        printf("2 - Ler os dados dos alunos\n");
        printf("3 - Apagar todos os dados\n");
        scanf("%d", &opcao);
    } while(opcao != 1 && opcao != 2 && opcao != 3);

    switch (opcao)
    {
        case 1:
            adicionaAlunos(BDAlunos);
            break;
        case 2:
            leitorAlunos(BDAlunos);
            break;
        case 3:
            apagaTudo(BDAlunos);
    }
    return 0;
}

void adicionaAlunos(FILE *arq1)
{
    
    
    char nome[40];
    char matricula[7];
    char telefone[11];
    
    
    arq1 = fopen("alunos.txt", "a");
    while (telefone[0] != '-')
    {
                        
        printf("Nome do aluno: \n");
        scanf("%s", nome);
        fprintf(arq1, "%s ", nome);

        printf("matricula do aluno: \n");
        scanf("%s", matricula);
        fprintf(arq1, "%s ", matricula);


        printf("Telefone do aluno(somente números): \n");
        printf("Digite '-' para parar\n");
        scanf("%s", telefone);
        fprintf(arq1, "%s\n", telefone);

    }
    fclose(arq1);
}

void leitorAlunos(FILE *arq2)
{
    arq2 = fopen("alunos.txt", "r");

    char aluno[150];

    while (!feof(arq2))
    {
        fgets(aluno, sizeof aluno, arq2);
        printf("%s", aluno);
    }
}

void apagaTudo(FILE *arq3)
{
    arq3 = fopen("alunos.txt", "w");
    fclose(arq3);
}