/*
Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação, e calcule a média de aproveitamento, usando a fórmula:
MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7
A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e a mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E. Média de aproveitamento Conceito:
>= 90 A
>= 75 e < 90 B
>= 60 e < 75 C
>= 40 e < 60 D
< 40 E  
*/

#include <stdio.h>

int main(){

int ID;
float n1, n2, n3, me, ma;

  printf("qul sei ID de aluno?\n");
  scanf("%d", &ID);
  printf("digite suas notas n1, n2 e n3 e a media dos exercicios\n");
  scanf("%f %f %f %f", &n1, &n2, &n3, &me);

  ma = (n1 + 2*n2 + 3*n3 + me)/7;

  if(ma < 4){
    printf("Aluno com ID: %d\n Média: %.2f\n Conceito: Reprovado", ID, ma);
  } else if (ma >= 4 && ma < 6){
    printf("Aluno com ID: %d\n Média: %.2f\n Conceito: Reprovado", ID, ma);
  } else if (ma >= 6 && ma < 7.5){
    printf("Aluno com ID: %d\n Média: %.2f\n Conceito: Aprovado", ID, ma);
  } else if (ma >= 7.5 && ma < 9){
    printf("Aluno com ID: %d\n Média: %.2f\n Conceito: Aprovado", ID, ma);
  } else {
    printf("Aluno com ID: %d\n Média: %.2f\n Conceito: Aprovado", ID, ma);
  }

}
