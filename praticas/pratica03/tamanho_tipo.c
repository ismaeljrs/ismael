#include <stdio.h>

int main() {
  printf("o tipo 'char'ocupa %lu byte(s) na memoria.\n",sizeof(char));
  printf("O tipo 'int' ocupa %lu byte(s) na memória.\n", sizeof(int));
  printf("O tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));
  printf("O tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));
  printf("O tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void));
  
  return 0;
}