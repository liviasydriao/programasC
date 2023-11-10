/*Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
a) Quantos homens foram cadastrados
b) Quantas mulheres foram cadastradas
c) A média de idade do grupo
d) A média de idade dos homens
e) Quantas mulheres tem mais de 20 anos */

#include <stdio.h>

int main(void) {
  int i = 1;
  char genero;
  int idade, contM = 0, contF = 0, mais20 = 0;
  float mediaM, mediaG, somaM = 0, somaG = 0;


    while(i<=5){
      printf("digite a %da idade\n", i);
      scanf("%d",&idade);
      printf("digite o %do genero (F/M)\n", i);
      scanf(" %c",&genero);
      if(genero == 'F'){
        contF++;

        if(idade > 20){
          mais20++;
        }     
      }
      if(genero == 'M'){
        contM++;
        somaM += idade;
        mediaM = somaM/contM;
      }
        somaG += idade;
        mediaG = somaG/i;
      i++;

    } 
    printf("\n %d homens foram cadastrados\n",contM);
    printf("\n %d mulheres foram cadastradas\n",contF);
    printf("\n a média da idade do grupo eh %.2f\n",mediaG);
    printf("\n a média da idade dos homens eh %.2f\n",mediaM);
    printf("\n %d mulheres tem mais de 20 anos\n",mais20);



  return 0;
}
