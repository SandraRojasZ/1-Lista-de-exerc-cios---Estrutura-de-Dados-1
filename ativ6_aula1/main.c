#include <stdio.h>
#include <stdlib.h>

// Atividade 6

/*
Faça um programa para ordenação de um vetor de inteiros, utilizando o algoritmo de
ordenação InsertionSort

*/

void Ordena_insertionSort(int *v, int n);

int main()
{
    int vDesordenado[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};

    //tam: tamanho
    int tamDesordenado = sizeof(vDesordenado)/ sizeof(vDesordenado[0]); //N = 10
    int i;

    printf("Vetor desordenado: ");
    for(i = 0; i < tamDesordenado; i++){
        printf("%d ", vDesordenado[i]);
    }

    printf("\n\n");

    printf("Ordenado por metodo insertionSort: \n\n");
    //Chama a função
    Ordena_insertionSort(vDesordenado,tamDesordenado);
    printf("Vetor ja ordenado: ");
    for(i = 0; i < tamDesordenado; i++){
       printf("%d ", vDesordenado[i]);
    }

    printf("\n");

    return 0;
}

void Ordena_insertionSort(int *v, int n){
    int i, j, aux;

    for(i = 1; i < n; i++){
        aux = v[i];
        for(j = i; (j > 0) && (aux < v[j - 1]); j--){
            v[j] = v[j - 1];
        }
        v[j] = aux;
    }
}

