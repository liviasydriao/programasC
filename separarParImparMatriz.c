// digitar até 10 e separar ímpar e par

#include <stdio.h>

int main(void) {
  int M[2][5];
  int i, j, valor, contPar = 0, contImp = 0;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      printf("digite um valor\n");
      scanf("%d", &valor);
      if (valor % 2 != 0) {
        M[0][contImp] = valor;
        contImp++;
      } else {
        M[1][contPar] = valor;
        contPar++;
      }
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }
  return 0;
}
