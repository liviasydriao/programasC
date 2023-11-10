/*Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números. */

#include <stdio.h>
#include <string.h>

int main() {
  int num1, num2;
  int operador;

  printf("digite dois numeros inteiros\n");
  scanf("%d %d", &num1, &num2);
  printf("digite que operacao deseja realizar \n 1 : * \n 2 : / \n 3 : +\n 4 : -\n");
  scanf("%d", &operador);
  

  switch (operador){
    case 1: 
      printf("\n o produto eh: %d", num1 * num2);
      break;
    case 2: 
      printf("\n a divisao eh: %d", num1 / num2);
      break;
    case 3: 
      printf("\n a soma eh: %d", num1 + num2);
      break;
    case 4: 
      printf("\n a subtracao eh: %d", num1 - num2);
      break;
    default: printf("\nvalor invalido!");
  }
return 0;
}
