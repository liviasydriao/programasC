/*
Escreva um algoritmo que leia um valor A e imprima a sequência de valores do cálculo de
A! (fatorial de A) e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120
*/

#include <stdio.h>
int main(){
  int i, a, produto = 1;

    printf("digite o valor de A\n");
    scanf("%d",&a);
    //x = pow(razao,9);

    for(i = a; i > 0; i--) {

     produto *= i;

  } 
   printf("o fatorial de A eh: %d ", produto);

  return 0;
}
