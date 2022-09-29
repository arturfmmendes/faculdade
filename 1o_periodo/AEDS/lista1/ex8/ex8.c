#include <stdio.h>

int main (void)
{

    char tipo;
    float salarioAtual;

    printf("Salário atual: ");
    scanf("%f", &salarioAtual);

//pedindo tipo de salario e limitand as opções
    printf("Tipo de salário | Digite 'A', 'B' ou 'C'\n");

    do
    {
        scanf(" %c", &tipo);
    }
    while (tipo != 'A' && tipo != 'B' && tipo != 'C');

    //operando com o salário
    switch(tipo)
    {
        case 'A':
            salarioAtual = salarioAtual * 1.08;
            break;

        case 'B':
            salarioAtual = salarioAtual * 1.11;
            break;

        case 'C':
            if (salarioAtual <= 1000)
            {
                salarioAtual += 350;
            }
            else
            {
                salarioAtual += 200;
            }
            break;
    }

    printf("Seu novo salário é de R$%.2f\n", salarioAtual);

}