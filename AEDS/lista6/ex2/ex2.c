#include <stdio.h>

int main(void) {

  FILE *txt = fopen("texto.txt", "w");
  char texto[10];
  
  printf("Seu Texto: ");
  scanf("%[^\n]s", texto);

  fprintf(txt, "%s", texto);

  return 0;
}