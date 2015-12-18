#include <stdio.h>
#include <palindromes_read.h>

void file_open()
{
    FILE *file;
    file = fopen("palindromes.txt", "r");
    char *string;
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
    }
    void search_palindromes();
    }
    fclose (file);
}

