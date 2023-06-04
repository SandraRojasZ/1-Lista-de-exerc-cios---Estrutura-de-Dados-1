#include <stdio.h>
#include <stdlib.h>

int func_potenciacao(int x, int y);

int main() {
    int x, y, res;

    printf("Insira o valor x: ");
    scanf("%d", &x);
    printf("Insira o valor y: ");
    scanf("%d", &y);

    res = func_potenciacao(x, y);

    printf("\n");
    printf("%d elevado a %d = %d.\n", x, y, res);

    return 0;
}

int func_potenciacao(int x, int y) {
    if(y == 0){
        return 1;
    }

    return x * func_potenciacao(x, y - 1);
}
