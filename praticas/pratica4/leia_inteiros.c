#include <stdio.h>

int main() {
  int numero ; 
  int y,x;
  printf("Digite um número inteiro: ");
  scanf("%i", &numero);
  printf("Você digitou: %i\n", numero);
  
  printf("Digite as coordenadas x e y: ");
  scanf("%i %i", &x, &y);
  
  printf("Você digitou: %i e %i\n", x, y);
  return 0;
}
