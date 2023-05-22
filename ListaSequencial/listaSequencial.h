//Arquivo listaSequencial.h
#define MAX 100

struct aluno{
    int matricula;
    float n1, n2, n3;
};
typedef struct lista Lista;
//Slide 15 - a fun��o abaixo retorna somente endere�os de mem�ria, ou seja, ponteiros
Lista *cria_lista();

//Slide 16 - Fun��o para destruir ou liberar a Lista
void libera_lista(Lista *li);

//Tamanho da lista
int tamanho_lista(Lista *li);

//Verifica se Lista est� cheia
int lista_cheia(Lista *li);

//Verificar se Lista est� vazia
int lista_vazia(Lista *li);

//Inser��o no final da lista
int insere_lista_final(Lista *li, struct aluno al);

//Inser��o no inicio da lista
int insere_lista_inicio(Lista *li, struct aluno al);

//Inser��o de forma ordenada
int insere_lista_ordenada(Lista *li, struct aluno al);

//Remo��o no final
int remove_lista_final(Lista *li);

//Remo��o no inicio com deslocamento
int remove_lista_inicio(Lista *li);

//Remo��o de um elemento qualquer com deslocamento
int remove_lista(Lista *li, int matricula);

//Busca por posicao
int consulta_lista_pos(Lista *li, int pos, struct aluno *al);

//Busca por conteudo
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);
