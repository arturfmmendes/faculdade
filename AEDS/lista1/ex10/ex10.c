#include <stdio.h>

int main (void)
{

   float velCarro;
   int velMax;

    printf("Velocidade máxima: ");
    scanf("%d", &velMax);

    printf("Velocidade do carro: ");
    scanf("%f", &velCarro);

    if (velCarro <= velMax)
    {
        printf("Motorista respeitou a lei\n");
    }
    else if (velCarro > velMax && velCarro <= (velMax + 10))
    {
        printf("Multa: 50 reais\n");
    }
    else if (velCarro > (velMax + 10) && velCarro <= (velMax + 30))
    {
        printf("Multa: 100 reais\n");
    }
    else
    {
        printf("Multa: 200 reais\n");
    }

}