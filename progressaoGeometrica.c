/*
Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência
em progressão geométrica (P.G.) contendo 10 valores.
*/

#include <stdio.h>
int main(){
  int i, numInicial, razao,x;
  double pow();

    printf("digite o número inicial e a razão da P.G.\n");
    scanf("%d %d",&numInicial,&razao);
    //x = pow(razao,9);

    for(i = numInicial; i <= (numInicial * pow(razao,9)); i = i * razao) {
      printf("%d ", i);

  } 


  return 0;
}
