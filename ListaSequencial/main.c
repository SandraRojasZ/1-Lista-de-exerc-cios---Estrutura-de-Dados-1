#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

typedef struct lista Lista;
int main()
{
    int x, mat = 110, posicao = 1;
    struct aluno al, al2, al3, dados_aluno;
    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula= 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

//slide 15 - Função para criar Lista
Lista *li;
li = cria_lista();


//Tamanho da lista -Slide 18
x = tamanho_lista(li);
printf("\nTamanho da lista e: %d", x);

//Verifica se Lista está cheia
x = lista_cheia(li);
if(x){
    printf("\nLista cheia!");
}else{
    printf("\nLista não está cheia!");
}

//Verificar se Lista está vazia
x = lista_vazia(li);
if(x){
    printf("\nLista esta vazia!");
}else{
    printf("\nLista nao esta vazia!");
}

//Inserção no final da lista
x = insere_lista_final(li, al2);
if(x){
    printf("\nAluno inserido com sucesso!");
}else{
    printf("\nErro aluno nao inserido!");
}

//Inserção no inicio da lista
x = insere_lista_inicio(li, al);
if(x){
    printf("\nAluno inserido com sucesso!");
}else{
    printf("\nErro aluno nao inserido!");
}

//Inserção de forma ordenada
x = insere_lista_ordenada(li, al3);
if(x){
    printf("\nAluno inserido na posicao com sucesso");
}else{
    printf("\nErro aluno nao inserido");
}

//Remoçao no final
x = remove_lista_final(li);
if(x){
    printf("\nAluno removido no final com sucesso");
}else{
    printf("\nErro aluno nao removido");
}
//Remoção no inicio com deslocamento
x = remove_lista_inicio(li);
if(x){
    printf("\nAluno removido do inicio");
}else{
    printf("\nErro aluno nao removido");
}

//Remoção de um elemento qualquer com deslocamento
x = remove_lista(li, mat);
if(x){
    printf("\nAluno removido na posicao especifica com sucesso");
}else{
    printf("\nErro aluno nao removido na posicao especifica");
}

//Busca por posicao
x = consulta_lista_pos(li, posicao, &dados_aluno);
if(x){
    printf("\nConsulta por posicao realizada com sucesso");
    printf("\nMatricula: %d", dados_aluno.matricula);
    printf("\nNota 1: %.2f", dados_aluno.n1);
    printf("\nNota 2: %.2f", dados_aluno.n2);
    printf("\nNota 3: %.2f", dados_aluno.n3);
}else{
    printf("\nNao foi possivel consultar na posicao especifica");
}

//Busca por conteudo
x = consulta_lista_mat(li, mat, &dados_aluno);
if(x){
    printf("\nConsulta por matricula realizada com sucesso");
    printf("\nMatricula: %d", dados_aluno.matricula);
    printf("\nNota 1: %.2f", dados_aluno.n1);
    printf("\nNota 2: %.2f", dados_aluno.n2);
    printf("\nNota 3: %.2f", dados_aluno.n3);
}else{
    printf("\nNao foi possivel consultar na posicao especifica");
}
//Slide 16 - Função para destruir ou liberar a Lista
//Esta deve ser a última função chamada pelo main()
libera_lista(li);

}
