#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <palindromes_search.h>

void search_palindromes(char* string, int i)
{
   int lenght;
   int count = 0;
   lenght = strlen(string);
   for (i=0; i<=lenght/2; ++i)
   {
       if (string[i] != string[lenght-i])
           ++count;

   }
   if (count == 0)
       printf ("%s \n", string);

   string = 0;


}
