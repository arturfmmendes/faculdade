/* Faça uma função em C para contar os dígitos de um determinado número usando recursão.

Faça um programa principal que leia um número, acione a função e exiba o resultado gerado. */

#include <stdio.h>
#include <math.h>

int quantosDigitos(int n)
{
  
  if (n == 0) return 0;

  return 1 + quantosDigitos(n / 10);
}

int main(void){

  int numero;

  printf("Digite o número: ");
  scanf("%d", &numero);
  int digitos = 0;

  printf("Este número tem %d dígitos.\n", quantosDigitos(numero));
}