//Escreva um programa em C que leia um vetor de inteiros e encontre o k-ésimo menor elemento do vetor

#include <stdio.h>
int b5() {

  int num, i, n, j, k, aux;

  printf("digite o tamanho do vetor\n");
  scanf("%d", &n);
  printf("digite o valor de k\n");
  scanf("%d", &k);

  int vetor[n];
  if (k < n) {
    for (i = 0; i < n; i++) {
      vetor[i] = 0;
    }

    for (i = 0; i < n; i++) {

      printf("digite o %do valor\n", i + 1);
      scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (vetor[i] < vetor[j]) {
          aux = vetor[i];
          vetor[i] = vetor[j];
          vetor[j] = aux;
        }
      }
    }

  } else {
    printf("o valor de k tem de ser menor que o tamanho do vetor\n");
  }
  for(i = 0; i < n; i++){
    printf("%d ", vetor[i]);
  }
  printf("\no k-ézimo menor valor eh %d\n", vetor[k-1]);
}
