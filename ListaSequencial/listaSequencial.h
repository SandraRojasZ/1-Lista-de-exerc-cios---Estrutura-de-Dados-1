//Arquivo listaSequencial.h
#define MAX 100

struct aluno{
    int matricula;
    float n1, n2, n3;
};
typedef struct lista Lista;
//Slide 15 - a função abaixo retorna somente endereços de memória, ou seja, ponteiros
Lista *cria_lista();

//Slide 16 - Função para destruir ou liberar a Lista
void libera_lista(Lista *li);

//Tamanho da lista
int tamanho_lista(Lista *li);

//Verifica se Lista está cheia
int lista_cheia(Lista *li);

//Verificar se Lista está vazia
int lista_vazia(Lista *li);

//Inserção no final da lista
int insere_lista_final(Lista *li, struct aluno al);

//Inserção no inicio da lista
int insere_lista_inicio(Lista *li, struct aluno al);

//Inserção de forma ordenada
int insere_lista_ordenada(Lista *li, struct aluno al);

//Remoção no final
int remove_lista_final(Lista *li);

//Remoção no inicio com deslocamento
int remove_lista_inicio(Lista *li);

//Remoção de um elemento qualquer com deslocamento
int remove_lista(Lista *li, int matricula);

//Busca por posicao
int consulta_lista_pos(Lista *li, int pos, struct aluno *al);

//Busca por conteudo
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);
