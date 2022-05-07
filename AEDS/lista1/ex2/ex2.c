#include <stdio.h>

int main(void)
{
//decarando
    int num[2];
//pedindo os numeros
    for(int numero = 0 ; numero < 2 ; numero++)
    {
        printf("%i° Número : \n", (numero + 1));
        scanf("%i", &num[numero]);
    }
//soma
    int soma = num[0] + num[1];
//adicionando ao resultado e imprimindo na tela
    if(soma >= 10)
    {
        printf("%i\n", soma + 5);
    }
    else
    {
        printf("%i\n", soma + 7);
    }

}