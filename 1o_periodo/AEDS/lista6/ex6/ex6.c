/*Faça um programa que solicite ao usuário um número, em seguida, imprima na tela todos os 
seus divisores. Salve em um arquivo texto a soma total desses divisores. */
#include <stdio.h>
#include <stdlib.h>

void printDivESalva(int n);

int main(void)
{
    int num;
    //solicitar numero
    printf("Numero: ");
    scanf("%d", &num);
    //descobrir os divisores
    printDivESalva(num);

    //imprimir na tela os divisores

    //salvar em arquivo .txt
    return 0;
}

void printDivESalva(int n)
{
    FILE *arq = fopen("text.txt", "w");
   
    int n1 = n; //salva o valor de n
    int divisor = 2;
    int soma = 0;

     //descobrir divisores
    //se n for divisivel por divisor
    for (int div = 1; div <= n / 2; div++)
    {
        if (n % div == 0)
        {
            printf("%d\n", div);
            soma += n / div;
        }
    }
    printf("%d", n1);
    fprintf(arq, "%d", soma);
}














/*int somaDiv(int n){
  int den=1, soma=0;

  while (den <=n){
    if (n % den == 0){
    soma += den;
    den++;
  }
    else den++;
  }
  return soma;
}

int main(void) {
  FILE *arq;
  int n, den=0;

  arq = fopen("gravar.txt", "w");

  printf("Digite aqui um numero: ");
  scanf("%d", &n);

  fprintf(arq,"A soma dos divisores dos divisores é :%d ", somaDiv(n));
  printf("")
  fclose(arq);
  return 0;
}*/