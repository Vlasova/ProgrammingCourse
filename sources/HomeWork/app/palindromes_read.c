#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palindromes_read.h"
#include "palindromes_search.h"

int file_open()
{
    FILE *file;
    file = fopen("palindromes.txt", "r");
    char *string;
    char palindrom[30];
    int result;
    if (file==0)
    {
        printf("Ошибка \n"); return -1;}
    else printf ("Найденные палиндромы:\n");


    while (1)
    { string = fgets(palindrom, sizeof(palindrom), file);
      if (string == NULL) {
          if(feof(file)!=0)
          {printf ("Конец файла \n");
              break;}
          else
          {printf("Ошибка чтения \n");
              break;}
      }


      else result = search_palindromes(string);
      if (result ==0) printf ("%s \n", string);

    }
    fclose(file);
    return 0;

}


