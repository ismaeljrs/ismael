#include <stdio.h>

int main(){
  
  printf("%i\n", 123);
  printf("%i\n", 56789);
  //
  printf("%5i\n", 123);
  printf("%5i\n", 56789);
  //
  printf("%05i\n", 1);
  //imprimir a data 05/08/2024
  printf("%02i/%02i/%4i\n", 5,8,2024);

  //imprimir no campo(-1 ,1)
  printf("(%i,%i)\n", -1,1);
  
  return 0;
}