#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
    printf("tamanho do char na memoria = %i byter(s)\n", sizeof(char));
    printf("tamanho do int na memoria = %i byter(s)\n", sizeof(int));
    printf("tamanho do float na memoria = %i byter(s)\n", sizeof(float));
    printf("tamanho do doubler na memoria = %i byter(s)\n", sizeof(double));
    printf("tamanho do void na memoria = %i byter(s)\n", sizeof(void));

   printf("a faixa de valores do char : de %i a %i\n", CHAR_MIN,CHAR_MAX);
  printf("a faixa de valores do char : de %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float : de %f a %f\n", FLT_MIN, FLT_MAX);
  printf("a faixa de valores do double: de %E a %E\n", DBL_MIN , DBL_MAX);
char tecla = 'A';
printf("valor de teclado: %c\n", tecla);
int idade = 25;
printf("Valor de idade : %i\n", idade );
float nota = 8.6f;//6 casas descimais 
printf("valor da nota: %f\n", nota);
double pi = 3.14156293; // 12 casas decimais
printf("Valor de pi:%10f\n",pi); 
const float PI = 3.14f;
printf("Valor da contante de PI = %f\n",PI);
PI - 3.14156f; // deu rui!! 
printf("tamanho do short int na memoria = %lu byter(s)\n", sizeof(short int));
printf("tamanho do long int na memoria = %lu byter(s)\n", sizeof(short int));
printf("tamanho do long double na memoria = %lu byter(s)\n", sizeof(long double));
printf("\n");
printf("a faixa de valores do shorts int :de %i  ate %i\n",SHRT_MIN,SHRT_MAX);
  printf("a faixa de valores do long int :de %li ate %li\n",LONG_MIN,LONG_MAX);
  printf("a faixa de valores do long doubler: de %LE  ate %LE\n",LDBL_MIN,LDBL_MAX);
  
  return 0;
}
