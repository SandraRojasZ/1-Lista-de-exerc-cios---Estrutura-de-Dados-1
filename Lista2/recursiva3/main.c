#include <stdio.h>
#include <stdlib.h>

void func_recursiva(int n);

int main() {
    int n;
    printf("Insira um numero: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("O numero deve ser maior que 0!\n");
        return 1;
    }

    printf("Contagem de 0 a %d em ordem crescente: \n", n);
    func_recursiva(n);

    return 0;
}

void func_recursiva(int n) {

    if(n == 0){
        printf("%d ", n);
        return 0;
    }

    func_recursiva(n - 1);
    printf("\n%d ", n);
}
