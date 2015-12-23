#include <stdio.h>
#include <stdlib.h>
#include "search_clear.h"

void clear(int n, int* matrix)
{ 
    int i,j;
    int sum = *matrix;

    for (i=0; i<n; i++)
    {
        sum = *(matrix+i*n);
        j = 1;
        while (j<n)
        sum = sum + *(matrix+i*n+j);
        if (sum == 0) printf("Просвет в %d строке", i);
        sum = 0;
    }

    for (j=0; j<n; j++)
    {
        sum = *(matrix+j);
        i = 1;
        while (i<n)
        sum = sum + *(matrix+i*n+j);
        if (sum == 0) printf("Просвет в %d столбце", j);
        sum = 0;
    }
    free (matrix);
}


