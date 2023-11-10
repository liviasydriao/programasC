/*
Chico tem 1,70m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3
centímetros por ano. Construir um programa em C que calcule e imprima quantos anos serão
necessários para que Juca seja maior que Chico (Utilize a estrutura while).

*/

#include <stdio.h>

int main(){
  float alturaChico = 1.7, alturaJuca = 1.1;
  int anos = 0;

  while(alturaJuca <= alturaChico){
    alturaJuca += 0.03;
    alturaChico += 0.02;
    anos++;
  }
  printf("o numero de anos necessario eh %d\n", anos);

  return 0;
}
