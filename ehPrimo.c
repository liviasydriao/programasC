//Faça um programa em C que receba um número inteiro e positivo, e diga se esse número é primo ou não. Obs: Um número é primo somente quando for divisível por 1 e por ele mesmo.

#include <stdio.h>

int main() {
 int num, i, resultado = 0;

 printf("Digite um número: ");
 scanf("%d", &num);

 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
    }
 }
 printf("ha %d divisores\n", resultado);

 if (resultado == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo e tem %d divisores\n", num, resultado);

 return 0;
}
