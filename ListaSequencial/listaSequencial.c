//Arquivo listaSequencial.c
#include <stdio.h>
#include <stdlib.h>
#include "listaSequencial.h"

struct lista{
    int qtd;
    struct aluno dados[MAX];
};

//Slide 15 - Fun��o para criar Lista
Lista *cria_lista(){
    Lista *li;
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL){
        li->qtd = 0;
    }
    return li;
}

//Slide 16 - Fun��o para destruir ou liberar a Lista
void libera_lista(Lista *li){
    free(li);
}
//Tamanho da lista
int tamanho_lista(Lista *li){
    if(li == NULL){
        return - 1;
    }else{
        return li->qtd;
    }
}

//Verifica se Lista est� cheia
int lista_cheia(Lista *li){
    if(li == NULL){
        return - 1;
    }else{
        return (li->qtd == MAX);
    }
}

//Varificar se Lista est� vazia
int lista_vazia(Lista *li){
    if(li == NULL){
        return - 1;
    }else{
        return (li->qtd == 0);
    }
}

//Inser��o no final da lista
int insere_lista_final(Lista *li, struct aluno al){
    if(li == NULL){
        return 0;
    }
    if(lista_cheia(li)){
        return 0;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

//Inser��o no inicio da lista
int insere_lista_inicio(Lista *li, struct aluno al){
    if(li == NULL){
        return 0;
    }
    if(lista_cheia(li)){
        return 0;
    }
    int i;
    for(i = li->qtd - 1; i >= 0; i--){
        li->dados[i+1] = li->dados[i];
    }
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

//Inser��o de forma ordenada
int insere_lista_ordenada(Lista *li, struct aluno al){
    if(li == NULL){
        return 0;
    }
    if(lista_cheia(li)){
        return 0;
    }
    int k, i =0;
    while(i < li->qtd&&li->dados[i].matricula < al.matricula){
        i++;
    }
    for(k = li->qtd-1;k >= i; k--){
        li->dados[k+1] = li->dados[k];
    }
    li->dados[i] = al;
    li->qtd++;
    return 1;
}

//Remo��o no final
int remove_lista_final(Lista *li){
    if(li == NULL){
        return 0;
    }
    if(li->qtd == 0){
        return 0;
    }
    li->qtd--;
    return 1;
}
//Remo�ao no inicio com deslocamento
int remove_lista_inico(Lista *li){
    if(li == NULL){
        return 0;
    }
    if(li->qtd == 0){
        return 0;
    }
    int k = 0;
    for(k = 0; k < li->qtd - 1; k++){
        li->dados[k] = li->dados[k+1];
    }
    li->qtd--;
    return 1;
}

//Remo��o de um elemento qualquer com deslocamento
int remove_lista(Lista *li, int matricula){
    if(li == NULL){
        return 0;
    }
    if(li->qtd == 0){
        return 0;
    }
    int k, i = 0;
    while(i < li->qtd && li->dados[i].matricula != matricula){
        i++;
    }
    if(i == li->qtd){
        return 0;
    }
    for(k = 1; k < li->qtd-1; k++){
        li->dados[k] = li->dados[k+1];
    }
    li->qtd--;
    return 1;
}

//Busca por posicao
int consulta_lista_pos(Lista *li, int pos, struct aluno *al){
    if(li == NULL || pos <= 0 || pos >= li->qtd){
        return 0;
    }
    *al = li->dados[pos-1];
    return 1;
}

//Busca por conteudo
int consulta_lista_mat(Lista *li, int mat, struct aluno *al){
    if(li == NULL){
        return 0;

    int k, i =0;
    while(i < li->qtd && li->dados[i].matricula != mat){
        i++;
    }
    if(i == li->qtd){
        return 0;
    }
    *al = li->dados[i];
    return 1;
}
}
