#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int *vetor, int n, int elem);

int buscaOrdenada(int *vetor, int n, int elem);

int buscaBinaria(int *vetor, int n, int elem);

void novoValorOrdenado(int *v, int *tam, int novoValor);

int main(){
    int vDesordenado[] = {150, 100, 160, 110, 170, 120,180,130, 190, 140};
    int vOrdenado[] = {100,110,120,130,140,150,160,170,180,190};
    //tam: tamanho
    int tamDesordenado = sizeof(vDesordenado)/ sizeof(vDesordenado[0]); //N = 10
    int tamOrdenado = sizeof(vOrdenado) / sizeof(vOrdenado[0]); //N = 10

    int elem = 110; //elemento a ser buscado
    int novoValor = 200 ;
    int i;

    printf("********************* Busca Linear *********************\n");
    int indice = buscaLinear(vDesordenado,tamDesordenado, elem);
    if(indice != -1)
        printf("Elemento %d encontrado no indice %d do vetor desordenado.\n", elem, indice);
    else
        printf("Elemento % d não encontrado no vetor desordenado. \n", elem);

    printf("\n********************* Busca Ordenada *********************\n");
    int indiceO = buscaOrdenada(vOrdenado,tamOrdenado, elem);
    if(indice != -1)
        printf("Elemento %d encontrado no indice %d do vetor ordenado.\n", elem, indiceO);
    else
        printf("Elemento % d não encontrado no vetor ordenado. \n", elem);

    printf("\n********************* Busca Binaria *********************\n");
    int indiceB = buscaBinaria(vOrdenado,tamOrdenado, elem);
    if(indice != -1)
        printf("Elemento %d encontrado no indice %d do vetor ordenado.\n", elem, indiceB);
    else
        printf("Elemento % d não encontrado no vetor ordenado. \n", elem);

    printf("\n*********** Vetor Ordenado sem nenhuma adicao ***********\n");
    for(i = 0; i < tamOrdenado; i++){
        printf("%d ", vOrdenado[i]);
    }
    printf("\n");

    novoValorOrdenado(vOrdenado, &tamOrdenado, novoValor);
    printf("\n*** Vetor Ordenado depois de colocar o novo valor %d.***\n", novoValor);
    for(i = 0; i < tamOrdenado; i++){
        printf("%d ", vOrdenado[i]);
    }
    printf("\n");
    return 0;
}

// Funções
int buscaLinear(int *vetor, int n, int elem){
    int i;
    for(i = 0; i < n; i++){
        if(elem == vetor[i]){
            return i;
        }
    }
    return - 1;
}

int buscaOrdenada(int *vetor, int n, int elem){
    int i;
    for(i = 0; i < n; i++){
        if(elem == vetor[i]){
            return i;
        }else{
            if(elem < vetor[i]){
                return -1;
            }
        }
    }
    return -1;
}

int buscaBinaria(int *vetor, int n, int elem){
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n -1;

    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if(elem < vetor[meio]){
            fim = meio - 1;
        }else{
            if(elem < vetor[meio]){
                inicio = meio + 1;
            }else{
                return meio;
            }
        }

    }
    return -1;
}

void novoValorOrdenado(int *vetor, int *n, int novoValor){
    int i, posicao;

    for(i = 0; i < *n; i++){
        if(vetor[i] >= novoValor){
            posicao = i;
            break;
        }
    }
    //Deslocando numeros
    for(i = *n -1; i >= posicao; i--){
        vetor[i + 1] = vetor[i];
    }
    //Inserção de um novo valor no vetor ordenado
    vetor[posicao] = novoValor;

    // Mudança no tamanho do vetor ordenado
    (*n)++;

}

