//faça um programa que calcule os digitos verificadores de um cpf digitado

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cpf[11], fator[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}, produtoDv1 = 0,
               dv1, produtoDv2 = 0, dv2, digVerificador, opt, i, j;

  for (i = 0; i < 9; i++) {
    cpf[i] = 0;
  }
  printf("digite os 9 primeiros digitos do seu CPF\n");

  for (i = 0; i < 9; i++) {

    scanf("%d", &cpf[i]);
    
  }
  
  for (i = 0; i < 9; i++) {
    produtoDv1 += cpf[8 - i] * fator[i];
  }
  dv1 = (produtoDv1 * 10) % 11;
  if (dv1 == 10) {
    dv1 = 0;
  }
 

  for (i = 1; i < 10; i++) {
    produtoDv2 += cpf[9 - i] * fator[i];
  }
  

  dv2 = (((produtoDv2 + dv1*2)*10) % 11) % 11;

  if (dv2 == 10) {
    dv2 = 0;
  }
  

  digVerificador = dv1*10 + dv2;
  

printf("digite (1) para verificar o digito verificador do seu CPF, (2) para informações sobre o desenvolvedor e (3) para sair\n");
  scanf("%d",&opt);

switch(opt){
  case 1: 
  printf("o seu digito verificador eh %d\n",digVerificador);
  break;
  case 2: 
  printf("a matricula eh tal e o nome eh tal\n");
  break;
  default: break;
}


  return 0;
}
