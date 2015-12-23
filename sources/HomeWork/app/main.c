#include <stdio.h>
#include "file_clear.h"
#include "search_sine.h"
#include "shahmati_ugroza.h"
#include "trancfer_to_meters.h"
#include "palindromes_read.h"
#include "main.h"

int main()
{
    puts ("1. transfer to meters");
    puts ("2. search chess threat");
    puts ("3. search sine");
    puts ("4. search clear in array");
    puts ("5. search palindromes");

    int choice;
    scanf ("%d", &choice);
    switch (choice) {
    case 1:
        puts ("transfer to meters");

        trancfer();
        break;




    case 2:
        puts ("search chess threat");

        search_threat_reading();
        break;




    case 3:
        puts ("search sine");

        search_sine();
        break;




    case 4:
        puts ("search clear in array");

        file_clear();
        break;




    case 5:
        puts ("search palindromes");

        file_open();
        break;



    }
    return (0);

}



