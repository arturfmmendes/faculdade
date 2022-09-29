#include <stdio.h>

int main (void)
{

//declarando variáveis
    int num[10];

//pedindo os numeros
    for(int i = 0; i < 10; i++){

        printf("Digite o %d° número:\n", i + 1);
        scanf("%d", &num[i]);
    }

//
    for(int i = 0; i < 10; i++)
    {
        int divisivel9;
        int divisivel5;
        int divisivel2;
       

        printf("%f\n", num[i]);

        if (num[i] % 9 == 0)
        {
            printf("É divisível por 9");
            divisivel9++;
        }
        if(num[i] % 2 == 0)
        {
            printf("É divisível por 2");
            divisivel2++;
        }
        if(num[i] % 5 == 0){
        
            printf("É divisível por 5");
            divisivel5++;
        }
        if(num[i] % 9 != 0 && num[i] % 2 != 0 && num[i] % 5 != 0){


            printf("Esse número não é divisível por nenhum destes");
        }
    }
}