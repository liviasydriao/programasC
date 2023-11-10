/*
Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual acondição de pagamento escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
1 À vista em dinheiro ou cheque, recebe 10% de desconto
2 À vista no cartão de crédito, recebe 15% de desconto
3 Em duas vezes, preço normal de etiqueta sem juros
4 Em duas vezes, preço normal de etiqueta mais juros de 10%
*/

#include <stdio.h>

int main(){

  float preco;
  int op;

  printf("qual o preço do produto?\n");
  scanf("%f", &preco);
  printf("digite a forma de pagamento:\n (1) à vista em dinheiro ou cheque\n (2) à vista no cartão de crédito\n (3) Em duas vezes\n (4)  Em duas vezes no cartão\n opcao: ");
  scanf("%d", &op);

  switch (op){
    case 1: 
    printf("vc deve pagar %.2f reais", preco*0.9);
    break;
    case 2: 
    printf("vc deve pagar %.2f reais", preco*0.85);
    break;
    case 3: 
    printf("vc deve pagar %.2f reais", preco);
    break;
    case 4: 
    printf("vc deve pagar %.2f reais", preco*1.1);
    break;
  }
return 0;
}
