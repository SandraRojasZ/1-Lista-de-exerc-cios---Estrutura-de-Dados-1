#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, s;
    s = 0; // O(1)
    for(i = 1; i < n - 1; i++){ // O(N)
        for(j = 1; j < 2 * n; j++){ // O(N)
            s = s + 1; // O(1)

        }
    }
}

// O(N) * O(N) --> O(N^2)

