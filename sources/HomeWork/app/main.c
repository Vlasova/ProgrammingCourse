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
        puts ("1. transfer to meters");
        puts ("2. automatic test");
        int choice2;
        scanf ("%d", &choice2);
        switch (choice2) {
        case 1:
            trancfer();
            break;



        }
    case 2:
        puts ("1. search chess threat");
        puts ("2. automatic test");
        int choice3;
        scanf ("%d", &choice3);
        switch (choice3){
        case 1:
            search_threat_reading();
            break;



         }
    case 3:
        puts ("1. search sine");
        puts ("2. automatic test");
        int choice4;
        scanf ("%d", &choice4);
        switch (choice4){
        case 1:
            search_sine();
            break;


        }
    case 4:
        puts ("1. search clear in array");
        puts ("2. automatic test");
        int choice5;
        scanf ("%d", &choice5);
        switch (choice5){
        case 1:
            file_clear();
            break;
        }

    case 5:
        puts ("1. search palindromes");
        puts ("2. automatic test");
        int choice6;
        scanf ("%d", &choice6);
        switch (choice6){
        case 1:
            file_open();
            break;
        }

        break;
    }
    return (0);

}



