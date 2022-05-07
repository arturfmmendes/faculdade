#include <stdio.h>

int main(void)
{

    int quantidade = 0;
    int valor = 0;
    int negativos = 0;
    int positivos = 0;
    int nulos = 0;

    printf("Quantos números?\n");
    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++)
    {
        printf("Digite os números:\n");
        scanf("%d", &valor);
        if (valor < 0)
        {
            negativos++;
        }
        else if (valor == 0)
        {
            nulos++;
        }
        else
        {
            positivos++;
        }
    }
    printf("%d positivo(s), %d negativo(s) e %d nulo(s)\n", positivos, negativos, nulos);
return 0;
}
