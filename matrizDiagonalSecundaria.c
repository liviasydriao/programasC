// Elabore uma função que recebe uma matriz e mostre a diagonal secundária da matriz (a função pode receber mais argumentos do que somente a matriz). Se a função pode mostrar a diagonal ela retorna 1, senão ela retorna zero.

#include <stdio.h>

int main() {
  int i, j, indice, linha, coluna, valor;

  printf("digite o numero de linhas e de colunas da matriz quadrada\n");
  scanf("%d %d", &linha, &coluna);

  int matriz[linha][coluna];

  if (linha == coluna) {
    for (i = 0; i < linha; i++) {
      for (j = 0; j < coluna; j++) {
        printf("digite um valor da matriz \n");
        scanf("%d", &valor);
        matriz[i][j] = valor;
      }
    }
  } else {
    printf("\n a matriz deve ser quadrada, quantidade de linhas igual a quantidade de colunas\n");
  }
  for (i = (linha-1), j = 0; i >= 0 && j < coluna; i--, j++) {

      printf("%d ", matriz[i][j]);

      }
  return 0;
}

AI

Ln 1, Col 156

Spaces: 2

History

Run
8s on 08:45:54, 11/10
int linha
