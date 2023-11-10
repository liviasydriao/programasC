/* 
  Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
a) Qual é a média de idade do grupo
b) Quantas pessoas tem mais de 18 anos
c) Quantas pessoas tem menos de 5 anos
d) Qual foi a maior idade lida
*/

#include <stdio.h>

int main(void) {
  int i = 1;
  int idade, maior = 0, menos5 = 0, mais18 = 0;
  float media, soma = 0;


    while(i<=10){
      printf("digite a %da idade\n", i);
      scanf("%d",&idade);
      soma += idade;
      media = soma/i;
      if(idade > maior){
        maior = idade;
      } 

      if (idade > 18){
        mais18++;
      }
      if (idade < 5){
        menos5++;
      }

      i++;

    } 
    printf("\n a media eh %.2f\n",media);
    printf("\n %d pessoas maiores de 18 anos\n",mais18);
    printf("\n %d pessoas menores de 5 anos\n",menos5);
    printf("\n maior idade eh %d\n",maior);

  return 0;
}
