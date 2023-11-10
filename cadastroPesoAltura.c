/*
Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando no
final:
a) Qual foi a média de altura do grupo
b) Quantas pessoas pesam mais de 90Kg
c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg
*/

#include <stdio.h>

int main(){

  int i = 1, cont90 = 0, contMenos50 = 0, contMais100 = 0;
  float mediaAltura, peso, altura, somaAltura = 0;

  while(i <= 7){
  printf("digite o peso e a altura da %da pessoa\n",i);
    scanf("%f %f", &peso, &altura);
    somaAltura += altura;
    mediaAltura = somaAltura/i;
    if(peso > 90){
      cont90++;
    } 
    if(peso < 50 && altura < 1.6){
      contMenos50++;
    }
    if(peso > 100 && altura > 1.9){
      contMais100++;
    }



    i++;
  }
  printf("a média de altura eh %.2f\n", mediaAltura);
  printf("%d pessoas pesam mais que 90kg\n",cont90);
  printf("%d pessoas pesam menos que 50kg e menos de 1,6m\n",contMenos50);
  printf("%d pessoas pesam mais que 100kg e mais de 1,9m\n",contMais100);

  return 0;
}
