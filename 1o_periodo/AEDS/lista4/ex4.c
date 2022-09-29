#include <stdio.h>
#include <math.h>

int resto(int num, int den){
  
  if (num - den < 0) return num;

  num -= den;
  
  return resto(num, den);
}

int main(void){

  int numerador;
  int denominador;

  printf("Digite os números: ");
  scanf("%d %d", &numerador, &denominador);

  printf("resto = %d\n", resto(numerador, denominador));
}