#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <palindromes_search.h>

char search_palindromes(char* string)
{
   int i;
   int lenght;
   int count = 0;
   lenght = strlen(string);
   for (i=0; i<=lenght/2; ++i)
   {
       if (string[i] != string[lenght-i])
           ++count;

   }

   return (count);

}
