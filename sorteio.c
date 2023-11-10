/*Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e
mostre na tela:
a) Quais foram os números sorteados
b) Quantos números estão acima de 5
c) Quantos números são divisíveis por 3
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int i = 1, contMaior = 0, contDiv = 0, x;

    printf("intervalo da rand: [0,10]\n");
    srand( (unsigned)time(NULL) );

    while(i <= 20){
        x = rand() % 10;
        printf("Numero %d: %d\n",i, x);
     if(x%3 == 0){
        contDiv++;
      } 
      if (x > 5){
        contMaior++;
      }  
      i++;
  }
  printf("%d números estão acima de 5\n", contMaior);
  printf("%d números são divisíveis por 3\n", contDiv);

  return 0;
}
