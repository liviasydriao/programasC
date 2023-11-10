/*
Crie um programa usando a estrutura “faça enquanto” que leia vários números.
A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na tela:
a) O somatório entre todos os valores
b) Qual foi o menor valor digitado
c) A média entre todos os valores
d) Quantos valores são pares
*/

#include <stdio.h>

int main(){
int i = 1,num, menor = 0, maior = 0, contPar = 0;
  char continuar;
  float media, soma = 0;


  do{

    printf("digite um numeroo\n");
    scanf("%d", &num);
    soma += num;
    media = soma/i;

    if(num % 2 ==0){
      contPar++;
    }
    if(i==1){

      maior = num;
      menor = maior;
    }
    if(num > maior){
      maior = num;
    }
    if(num < menor){
      menor = num;
    }


    i++;
      printf("deseja continuar? (S/N)\n");
      scanf(" %c", &continuar);
} while(continuar != 'N');

  printf("o somatório de todos os valores eh %.2f\n",soma);
  printf("a media de todos os valores eh %.2f\n",media);
  printf("o menor valor digitado foi %d e o maior foi %d\n",menor, maior);
  printf("%d valores são pares\n",contPar);


  return 0;
}
