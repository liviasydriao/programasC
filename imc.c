/*
O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / ( altura )2 Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo. IMC em adultos Condição:
Abaixo de 18,5 Abaixo do peso
Entre 18,5 e 25 Peso normal
Entre 25 e 30 Acima do peso
Acima de 30 obeso 
*/

#include <stdio.h>

int main(){
  float IMC, peso, altura;
  printf("qual seu peso?\n");
  scanf("%f", &peso);
  printf("qual sua altura em metros?\n");
  scanf("%f", &altura);

  IMC = peso/(altura*altura);

  if(IMC < 18.5){
    printf("abaixo do peso\n");
  } if (IMC > 18.5 && IMC < 25){
    printf("peso normal\n");
  } if (IMC > 25 && IMC < 30){
    printf("acima do peso\n");
  } if (IMC > 30){
    printf("obeso\n");
  }

},
