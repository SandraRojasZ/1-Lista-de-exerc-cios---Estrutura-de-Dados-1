#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;

    for(i = 0; i < n; i++){  // O(N)
        for(j = 0; j < n; j++){  // O(N)
            r[i][j] = 0; // O(1)
            for(k = 0; k < n; k++){ // O(N)
                r[i][j] += a[i][k] * b[k][j]; // O (1)
            }
        }
    }
}

// O(N) * O(N) * O(N) --->O(N^3)
