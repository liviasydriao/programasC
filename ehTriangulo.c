/*
Escreva um algoritmo que leia os três lados de um triângulo (A, B, C) e que determine e imprima uma mensagem informando o seu tipo, conforme a tabela abaixo:
a) Triângulo Equilátero = 3 lados iguais
b) Triângulo Isósceles = 2 lados iguais
c) Triângulo Escaleno = 3 lados diferentes 
*/

#include <stdio.h>
int main(){

    float l1, l2, l3;
    printf("digite os 3 valores dos lados dos triangulos\n");
    scanf("%f %f %f", &l1, &l2, &l3);

  if(l3<(l1+l2) && l2<(l1+l3) && l1<(l2+l3)){
    printf("eh um triangulo\n");
    if(l1==l2 && l2==l3){
      printf("o triangulo eh equilatero\n");
    } else if(l1!=l2 && l2!=l3 && l1!=l3){
      printf("o triangulo eh escaleno\n");
    } else {printf("o triangulo eh isosceles\n");}
  } else {printf("nao eh um triangulo\n");}

return 0;

}



