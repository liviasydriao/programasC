/*
  Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura “For”.
No final, mostre na tela:
a) Quantas mulheres foram cadastradas
b) Quantos homens pesam mais de 100Kg
c) A média de peso entre as mulheres
d) O maior peso entre os homens
*/


#include <stdio.h>

int main(void) {
  int i, contadorG = 0, contadorP = 0;
  char genero;
  float somaPeso = 0, peso, media = 0, maiorPeso = 0;



  for(i = 0; i<=7; i++){

    printf("digite seu gênero (F/M) e seu peso\n");
    scanf(" %c %f",&genero,&peso);

    if(genero == 'F'){
      contadorG++;
      somaPeso += peso;

    }  

    if(genero == 'M'){
      if(peso > maiorPeso){
        maiorPeso = peso;}

        if(peso >= 100){
        contadorP++;
      }
    }
  }
  media = (somaPeso/contadorG);

  //media = (float)(somaPeso/contadorG);
  printf("%d mulheres foram cadastradas\n", contadorG);
  printf("%d homens pesam mais de 100kg\n", contadorP);
  printf("a media de peso das mulheres foi %.2f\n", media);
  printf("o maior peso entre os homens foi %.2f kg\n", maiorPeso);

  return 0;
}
