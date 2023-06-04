#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
    char nome[40];
    int idade;
    char endereco[40];
}CADASTRO;

CADASTRO* aloc_memoria(int n);

CADASTRO* coleta(CADASTRO* cad, int n);

int main(){
    int n;
    printf("Insira o numero de cadastros: ");
    scanf("%d", &n);
    getchar();
    printf("\n");

    CADASTRO *p = aloc_memoria(n);


    printf("\tInsira os dados\n");

    coleta(p, n);

    free(p);
    return 0;
}

CADASTRO* aloc_memoria(int n){
    CADASTRO *p = (CADASTRO*) malloc(n * sizeof(CADASTRO));
    if(p == NULL){
        printf("Nao foi possivel fazer a alocacao de memoria!");
        return 0;
    }
   return p;
}

CADASTRO* coleta(CADASTRO* cad,int n){
int i = 0;

   for (i; i < n; i++) {
        printf("Cadastro %d\n", i);

        printf("Nome: ");
        fgets(cad[i].nome,40, stdin);

        printf("Idade: ");
        scanf("%d", &cad[i].idade);
        getchar();

        printf("Endereco: ");
        fgets(cad[i].endereco,40, stdin);

        printf("\n");

}
}

