#include <stdio.h>

int main (void){

  int habitantes;
  printf("Número de habitantes: ");
  scanf("%i", &habitantes);

  //definindo variaves 
  int salario[habitantes];
  int maiorSalario = 0;
  int totalSalario = 0;
  int salarioMenorQue100 = 0;
  int filhos[habitantes];
  int totalFilhos = 0;
  
  //iteração para adcionar os dados individuais de cada cidadão
  for(int i = 0; i < habitantes; i++){
    
    //pedindo salario
    printf("Salário do habitante %i: ", i + 1);
    scanf("%i", &salario[i]);
    
    //maior salario
    if(salario[i] > salario[i - 1]){
      maiorSalario = salario[i];
    }

    //total salario do habitante
    totalSalario = totalSalario + salario[i];
    
    //contando os salarios menores que 100
    if(salario[i] <= 100){
      salarioMenorQue100++;
    }

    //pedindo numero de filhos do habitante
    printf("Número de filhos: ");
    scanf("%i", &filhos[i]);

    //total filhos
    totalFilhos = totalFilhos + filhos[i];
    
  }

  float mediaSalario = totalSalario / (float) habitantes;
  float mediaFilhos = totalFilhos / (float) habitantes;
  float percMenorQue100 = (salarioMenorQue100 / (float) habitantes) * 100;
  
  printf("Média do salário da população: %.2f\n", mediaSalario);
  printf("Média do número de filhos: %.2f\n", mediaFilhos);
  printf("O maior salário desta população é de: %i\n", maiorSalario);
  printf("O percentual de pessoas com salários de até 100 reais é: %.1f%%\n", percMenorQue100);
  
  return 0;
  
}