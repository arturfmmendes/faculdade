#include <stdio.h>

int main (void)
{

    char simbolo;

    printf("Escreva um símbolo: ");
    scanf(" %c", &simbolo);

    switch(simbolo)
    {
        case '<':
            printf("SINAL DE MENOR\n");
            break;
        case '>':
            printf("SINAL DE MAIOR\n");
            break;
        case '=':
            printf("SINAL DE IGUAL\n");
            break;
        default:
            printf("OUTRO SÍMBOLO\n");
    }
}
