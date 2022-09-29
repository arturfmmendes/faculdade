#include <stdio.h>

int main(void)
{

//declarando e inicializando
    int ano = 0;
    char aniversario = 'a';

//armazenando idade e limitando a data
    do
    {
        printf("Quando você nasceu? ");
        scanf("%d", &ano);
    }
    while ( ano < 1900 || ano > 2022 );

    int idade = 2022 - ano;

//fez aniversario?
    printf("Você já fez aniversário?(digite 's' para SIM e 'n' para NÃO)\n");

    do
    {
        scanf("%c", &aniversario);
    }
    while (aniversario != 's' && aniversario != 'n');
//ainda não fez
    if(aniversario == 'n')
    {
        idade--;
    }
//pode tirar carteira?
    if (idade < 17)
    {
        printf("Com %d vai ter que esperar, amigo(a)\n", idade);
    }
    else if (idade == 17)
    {
        printf(" %d? só mais um pouco, amigo(a)\n", idade);
    }
    else
    {
        printf("Com %d pode tirar sem problema, amigo(a)\n", idade);
    }

}