#include <stdio.h>
#include <stdlib.h>

//Atividade 4

/*Implemente um programa para ordenação de um vetor de inteiros, utilizando o
conceito de Ordenação Oscilante, visto anteriormente, para o algoritmo de ordenação
BubbleSort.*/

void Ordena_bubleSortOscilante(int *v, int n);

int main()
{
    int vDesordenado[] = {120, 150, 110, 130, 100, 160,140,190, 180, 170};

    //tam: tamanho
    int tamDesordenado = sizeof(vDesordenado)/ sizeof(vDesordenado[0]); //N = 10
    int i;

    printf("Vetor desordenado: ");
    for(i = 0; i < tamDesordenado; i++){
        printf("%d ", vDesordenado[i]);
    }

    printf("\n\n");

    printf("Ordenado por metodo bubbleSortOscilante: \n");
    printf("\n");

    Ordena_bubleSortOscilante(vDesordenado,tamDesordenado);
    printf("Vetor ja ordenado: ");
    for(i = 0; i < tamDesordenado; i++){
       printf("%d ", vDesordenado[i]);
    }

    printf("\n");

    return 0;
}

void Ordena_bubleSortOscilante(int *v, int n){
    int i, continua, aux, fim = n;
    // ordenação em ordem crescente
    int crescente = 1;
    do{
        continua = 0;
        for(i = 0; i < fim - 1; i++){
            if(crescente){
               if(v[i] > v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                continua = i;
                }
            }else{
                if(v[i] < v[i + 1]){
                    aux = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = aux;
                    continua = i;
                }
            }

        }
        //mudança da ordenação
        crescente = !crescente;
        fim--;
    }while(continua != 0);

}
