#include <stdio.h>
#include <stdlib.h>

// Atividade 5

/*
Faça um programa para ordenação de um vetor de inteiros, utilizando o algoritmo de
ordenação selectionSort

*/

void Ordena_selectionSort(int *v, int n);

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

    printf("Ordenado por metodo selectionSort: \n\n");
    //Chama a função
    Ordena_selectionSort(vDesordenado,tamDesordenado);
    printf("Vetor ja ordenado: ");
    for(i = 0; i < tamDesordenado; i++){
       printf("%d ", vDesordenado[i]);
    }

    printf("\n");

    return 0;
}

void Ordena_selectionSort(int *v, int n){
    int i, j, menor, troca;

    for(i = 0; i < n - 1; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}

