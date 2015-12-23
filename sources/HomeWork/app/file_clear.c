#include <stdio.h>
#include <stdlib.h>
#include "file_clear.h"
void file_clear()
{
    FILE *fp;
    fp=fopen("array.txt","a");
    int i,j,n = 0;
    fscanf(fp, "%d \n", &n);
    int *matrix;
    matrix=(int*) malloc(n*n*sizeof(int));
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            fscanf(fp, "%d", (matrix+i*n+j));
        }

    fclose (fp);
    void clear(int n, int* matrix);

}
