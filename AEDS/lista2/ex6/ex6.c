#include <stdio.h>

int main(void){

    
  int n = 0;
  float e = 0;

  do
  {

    printf(" Fatorial desejado: ");
    scanf("%d", &n);

    if (n < 1){
    printf("Escolha um valor inteiro e positivo\n");
    }

  }
  while (n < 1);

  for(e = 1; n >= 1; n--)
  {

    e = e + (1 / (float) n);

  }

  printf("Resultado: %.2f\n", e);
}