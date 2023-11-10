/*
Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. No
final, mostre o total de salários pagos aos homens e o total pago às mulheres. O
programa vai perguntar ao usuário se ele quer continuar ou não sempre que ler os
dados de um funcionário
*/

#include <stdio.h>

int main(){

  int i;
  char genero, continuar;
  float salario, totHomem = 0, totMulher = 0;

  while(continuar != 'N'){
    printf("digite o genero (H/M) e o salário\n");
    scanf(" %c %f", &genero, &salario);
    if(genero == 'H'){
          totHomem += salario;
    } 
     if(genero == 'M'){
          totMulher += salario;
    } 
    i++;
    printf("deseja continuar? (S/N)\n");
    scanf(" %c", &continuar);
  }
  printf("o total de salário dos homens eh %.2f\n", totHomem);
  printf("o total de salário das mulheres eh %.2f\n", totMulher);


  return 0;
}
