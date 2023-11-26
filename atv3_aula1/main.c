#include <stdio.h>
#include <stdlib.h>

//Atividade 3
void Ordena_bubleSort(int *v, int n);

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

    printf("Ordenado por metodo bubbleSort: \n");
    printf("\n");

    Ordena_bubleSort(vDesordenado,tamDesordenado);
    printf("Vetor ja ordenado: ");
    for(i = 0; i < tamDesordenado; i++){
       printf("%d ", vDesordenado[i]);
    }

    printf("\n");

    return 0;
}

void Ordena_bubleSort(int *v, int n){
    int i, continua, aux, fim = n;
    do{
        continua = 0;
        for(i = 0; i < fim - 1; i++){
            if(v[i] > v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);

}
