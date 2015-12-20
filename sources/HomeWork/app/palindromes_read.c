#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <palindromes_read.h>

void file_open()
{
    FILE *file;
    file = fopen("palindromes.txt", "r");
    char *string;
    char *result3;
    int N=10;
    int i=0;
    int plus_memory=5;
    string = (char*) malloc (N*sizeof(char));
    while (!EOF){
    while ((string[i]=fgetc(file))!='\n')
    {
        if (++i>=N){
            N+=plus_memory;
            string = (char*) realloc (string, N*sizeof(char));
        }

        fclose(file);
    }
    result3 = search_palindromes(string);
    if (strcmp(result3, "no") != 0)
        printf ("%s \n", result3);
}
}

