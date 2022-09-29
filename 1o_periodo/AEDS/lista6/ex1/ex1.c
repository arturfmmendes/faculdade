#include <stdio.h>

int main(void) {

  FILE *arq;
  arq = fopen("ex1arq.txt", "w");
  int i = 1;
  while(i <= 10){

    fprintf(arq,"%d\n", i);
      i++;
  }
  return 0;
}