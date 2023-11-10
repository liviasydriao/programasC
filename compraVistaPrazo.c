// Uma loja utiliza o código V para compras à vista e o código P para compras a prazo. Faça um algoritmo que receba o código de e o valor de 15 transações. Calcule e mostre: • O valor total das compras à vista • O valor total das compras a prazo • O valor total das compras efetuadas.

#include <stdio.h>
int main(void) {

  int i=0;
  char codigo;
  float totVista = 0, totPrazo = 0, valorTotal = 0, valorTransacao;

  while(i <= 14){

    printf("Digite o código da transação: \n");
    scanf(" %c", &codigo);
    printf("Digite o valor da transação: \n");
    scanf("%f", &valorTransacao);

    valorTotal += valorTransacao;

    if(codigo == 'V'){
      totVista += valorTransacao;
    }
    if(codigo == 'P'){
      totPrazo += valorTransacao;
    }
  i++;
}
  printf("o valor total das compras a vista foi de %.2f\n",totVista);
  printf("o valor total das compras a prazo foi de %.2f\n",totPrazo);
  printf("o valor total das compras foi de %.2f\n",valorTotal);

  return 0;
}
