#include <stdio.h>
#include <math.h>

void calcCircunferencia (float *r, float *compr ,float *area){

  printf("Comprimento: %.2f\n", *compr);


  printf("Área: %.2f", *area);
}



int main(void) {

  float R;
  const float PI = 3.14;
  

  printf("Valor do raio: ");
  scanf("%f", &R);

  float A = PI * pow(R, 2);
  float C = 2.0 * PI * R; 

  calcCircunferencia(&R, &C, &A);
  return 0;
}