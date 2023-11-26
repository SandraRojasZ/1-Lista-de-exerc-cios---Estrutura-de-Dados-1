#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, s;
    for(i = 0; i < n -1; i++){ // O(N)
        for(j = i + 1; j < n; j++){ // O(N)
            for(k = 1; k < j; k++){ // O(N)
                s = 1; // O(1)
            }
        }
    }
}

// O(N) * O(N) * O(N) --> O(N^3)

