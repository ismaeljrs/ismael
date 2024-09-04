#include <stdio.h>
//autor : ismael jorge brandao
//data 04/09/2024
//
int main(){
  char tecla = '\0';
  
  printf("digite um teclado: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Voce digitou : %c\n", tecla);

  printf("Digite outra Tecla:");
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("voce digitou: %c\n",tecla);

  char nome [31];
  printf("Entre um nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Seu nome e: %s\n", nome);
  
  return 0;
}