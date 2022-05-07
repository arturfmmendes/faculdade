#include <stdio.h>
#include <math.h>

int subtracao(int num, int den)
{
  
  if (num <= 1) return 0;

  num -= den;
  
  return 1 + subtracao(num, den);
}

int main(void){

  int numerador, denominador;

  printf("Digite o número: ");
  scanf("%d %d", &numerador, &denominador);

  printf("subtracao = %d\n", subtracao(numerador, denominador));
}