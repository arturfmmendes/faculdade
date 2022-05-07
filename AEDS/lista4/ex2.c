#include <stdio.h>
#include <math.h>

int somaDigitos(int n)
{
  
  if (n == 0) return 0;

  return (n % 10) + somaDigitos(n / 10);
}

int main(void){

  int numero;

  printf("Digite o número: ");
  scanf("%d", &numero);
  int digitos = 0;

  printf("SomaDigitos = %d\n", somaDigitos(numero));
}