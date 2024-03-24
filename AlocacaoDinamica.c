/* Com a finalidade de realizar um controle de livros para cadastrar,consultar, eliminar e exibir a lista de livros que contém código/ISBN, 
título, autor e editora do livro, implemente dois programas em linguagem C usando alocação estática (vetor) e o outro alocação dinâmica
(ponteiro).*/

//alocação estática
// 1 – Com a finalidade de realizar um controle de livros para cadastrar, consultar, eliminar e exibir a lista de livros que contém código/ISBN, título, autor e editora do livro, implemente dois programas em linguagem C usando alocação estática (vetor) e o outro alocação dinâmica (ponteiro).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n = 0;

typedef struct {
  int codigo;
  char titulo[50];
  char autor[50];
  char editora[50];
} Livros;


void cadastrar(Livros cadastro[], int n) {
  
   
      printf("Digite o codigo:\n");
      scanf("%d", &cadastro[n].codigo);
      getchar();
  
      printf("Digite o titulo:\n");
      fgets(cadastro[n].titulo, 50, stdin);
  
     printf("Digite o autor:\n");
      fgets(cadastro[n].autor, 50, stdin);
  
      printf("Digite o numero do editora:\n");
      fgets(cadastro[n].editora, 50, stdin);
      
      printf(" \n");
  
}
void exibir(Livros cadastro[], int n) {
  // exibir:
  int i;
  for (i = 0; i < n; i++) {
    printf("\n>> Codigo:%d", cadastro[i].codigo);

    printf("\n>> Título: %s", cadastro[i].titulo);

   printf(">> Autor:%s", cadastro[i].autor);

    printf(">> Editora:%s", cadastro[i].editora);
    printf("------------------------");
  }
}

void consultar(Livros cadastro[], int n, char nome[]){
    for(int i=0; i<n; i++){
           if (strcmp(cadastro[i].titulo, nome)==0){
             printf("\n>> Codigo:%d", cadastro[i].codigo);

             printf("\n>> Título: %s", cadastro[i].titulo);

            printf(">> Autor:%s", cadastro[i].autor);

             printf(">> Editora:%s", cadastro[i].editora);
            }else{
       printf("Livro não encontrado\n");
      }
    }
}

int eliminar(Livros cadastro[], int n, char nome[]){
  int j,i;
  
  for(i=0; i<n; i++){
         if (strcmp(cadastro[i].titulo, nome)==0){
          for(j=i+1; j<n; j++){
              strcpy(cadastro[j-1].titulo,cadastro[j].titulo);
              cadastro[j-1].codigo=cadastro[j].codigo;
              strcpy(cadastro[j-1].autor,cadastro[j].autor);
              strcpy(cadastro[j-1].editora,cadastro[j].editora);

             }
           printf("Livro eliminado com sucesso!\n");
           n--;
           i = n;
           
          } else{
           printf("Livro não encontrado\n");
           break;
          }
  }
  return n;
}

void menu(){
  printf("\n---- Menu ----\n");
  printf("1 - Cadastrar contato\n");
  printf("2 - Exibir contatos\n");
  printf("3 - Eliminar contato\n");
  printf("4 - Pesquisar contato\n");
  printf("5 - Sair do sistema\n\n");
  printf("Escolha uma opcao:");
  
}


int main() {

  int i, op;
  /*printf("digite quantos elementos irá cadastrar\n");
  scanf("%d", &n);*/
  Livros lista[] = {0};
  char nomeLivro[50];

  do{
    menu();
    scanf("%d",&op);

    switch(op){
      case 1: cadastrar(lista, n);
        n++;
      break;

      case 2: exibir(lista, n);
      break;

      case 3:
        getchar();
        printf("\nDigite o nome a ser eliminado: ");
        fgets(nomeLivro, 50, stdin);
        n = eliminar(lista, n, nomeLivro);
        printf("n = %d",n);
        break;

      case 4: 
      getchar();
      printf("\ndigite o nome do livro que quer pesquisar\n");
      fgets(nomeLivro, 50, stdin);
      consultar(lista, n, nomeLivro);
      break;
    }
  } while(op != 5);
  
  return 0;
}

// alocação dinâmica
// Com a finalidade de realizar um controle de livros para cadastrar,consultar, eliminar e exibir a lista de livros que contém código/ISBN, título, autor e editora do livro, implemente dois programas em linguagem C usando alocação estática (vetor) e o outro alocação dinâmica (ponteiro).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int codigo;
  char titulo[50];
} Livros;

void cadastrar(Livros contato[], int *n) {

  printf("Digite o codigo:\n");
  scanf("%d", &contato[*n].codigo); 
  getchar();
  printf("Digite o titulo:\n");
  fgets(contato[*n].titulo, 50, stdin);
  printf(" \n");
}

void exibir(Livros contato[], int *n) {

  int i;
  for (i = 0; i < *n; i++) {
    printf("\n>> Codigo:%d", contato[i].codigo);
    printf("\n>> Título: %s", contato[i].titulo);
    printf("\n------------------------\n");
  }
}

void consultar(Livros contato[], int *n){
  char nomeLivro[50];
  getchar();
  printf("\ndigite o nome do livro que quer pesquisar\n");
  fgets(nomeLivro, 50, stdin);

    for(int i=0; i < *n; i++){
           if (strcmp(contato[i].titulo, nomeLivro)==0){
             printf("\n>> Codigo:%d", contato[i].codigo);
             printf("\n>> Título: %s", contato[i].titulo);
            } 
    }
}

void eliminar(Livros contato[], int *n){
  char nomeLivro[50];
  getchar();
  printf("\nDigite o nome a ser eliminado: ");
  fgets(nomeLivro, 50, stdin);
  int j,i;

  for(i=0; i < *n; i++){
         if (strcmp(contato[i].titulo, nomeLivro)==0){
          for(j=i+1; j < *n; j++){
              strcpy(contato[j-1].titulo,contato[j].titulo);
              contato[j-1].codigo = contato[j].codigo;
             }
           printf("Livro eliminado com sucesso!\n");
           *n = *n-1;
           i = *n;
          } 
  }
}

void menu() {
  printf("\n---- Menu ----\n");
  printf("1 - Cadastrar contato\n");
  printf("2 - Exibir contatos\n");
  printf("3 - Eliminar contato\n");
  printf("4 - Pesquisar contato\n");
  printf("5 - Sair do sistema\n\n");
  printf("Escolha uma opcao:");
}
//---------------------------------------------------------------------

int main() {
  int i, op, n = 0, tam = 3;
  Livros contato[] = {0};
  char nomeLivro[50];

  Livros *ponteiro = &contato[n];
  ponteiro = (Livros*)malloc(sizeof(Livros)*tam); // alocacao dinamica da estrutura


  do {
    menu();
    scanf("%d", &op);

    switch (op) {
    case 1:
      if(n==tam){
        //Capacidade esgotada, devemos aumentar o tamanho usando "realloc" (ex: dobrar capacidade).
            tam *= 2;
              ponteiro = (Livros*)realloc(contato, sizeof(Livros)*tam);
            }
      cadastrar(contato, &n);
      n++;
      break;
    case 2:
      exibir(contato, &n);
      break;
    case 3:
      eliminar(contato, &n);
      break;

    case 4: 
      consultar(contato, &n);
      break;
    }
  } while (op != 5);

  return 0;
}
