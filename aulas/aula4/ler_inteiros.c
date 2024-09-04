#include <stdio.h>

int main(){
  int numero = 0;
  
  printf("Entre com um numero.: ");
  scanf("%i", &numero);
  int deu_certo = scanf("%i", &numero);

  printf("Voce Dfigitou.: %i\n", numero);
  printf("Você digitou..: %i\n", numero);

  int coord_x = 0;
  int coord_y = 0;

  printf("Entre com as coordenadas do ponto: ");
  deu_certo = scanf("%i %i", &coord_x, &coord_y);

  printf("Voce digitou: %i %i\n", coord_x,coord_y);
  printf("A leitura deu certo? %i\n", deu_certo);
  
    return 0;
}