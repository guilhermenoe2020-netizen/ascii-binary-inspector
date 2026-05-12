#include <stdio.h>
#include <stdlib.h>

//funcoes
void linha(){
  printf("\n====================   TABELA ASCII   ===========================\n");
}
void resultado(){
  printf("\n=================    RESULTADO    =========================\n");
}
void continuar(){
    printf("\n'enter' para CONTINUAR | Qualquer botao para ENCERRAR ");
}
void mostrarBinario(unsigned char valor){
  for(int j = 7; j >= 0; j--){
      int bit = (valor >> j) & 1;
        printf("%d", bit);
   }
}

int main(){
    unsigned char vet[100];
    int aux, i;

    linha();
    printf("Digite alguma coisa (Pressione Ctrl+Z para processar os valores): \n");

    int cont=0;

    while ((aux = getchar()) != EOF && cont<100){
      if (aux != '\n'){ // Se nao for um 'Enter' (pular linha), armazena valor no vetor e contar
         vet[cont] = aux;
          cont++;
      }
    }
    system("cls");

    resultado();
    for(i=0;i<cont;i++){
       printf("Caractere: %c | Valor ASCII: %3d | Binario: ", vet[i], vet[i]);
       mostrarBinario(vet[i]);
            printf("\n");
    }

    int next;
    int codigo;

    continuar();
    while ((next = getchar()) == '\n'){
    system("cls");

    printf("\n============= CONVERSOR ASCII ==============\n");
    printf("Digite um numero da tabela ASCII (0 a 255): ");
    scanf("%d", &codigo);


      if(codigo>= 0 && codigo <= 255){
        system("cls");

        resultado();
        printf("Valor ASCII:%3d | Caractere: %c | Binario: ", codigo, codigo);
        mostrarBinario(codigo);
      }
        else{
            printf("\nERRO ! O numero deve esta entre 0 e 255.\n");
        }

     while (getchar() != '\n');
     continuar();
    }
     system("cls");
     printf("\nprograma encerrado!\n");
   return 0;
 }
