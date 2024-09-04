#include <stdio.h>
//autor : ismael jorge brandao
//data 04/09/2024
//
int main(){
  float nota = 0.0f;

  printf("Encontre com um nota entre 0 e 10: ");
  int deu_certo = scanf("%f", &nota);

  printf("Voce digitou: %i", nota);

  double pi = 0.0;
  printf("Entre com um valor de pi com ate 10 casas :");
  deu_certo = scanf("%lf", &pi);

  printf("Voce digitou: %.10f\n", pi);
  
  return 0;
}