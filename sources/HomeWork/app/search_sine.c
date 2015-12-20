#include <stdio.h>
#include "search_sine.h"
#include "sinx.h"



void search_sine ()
{
    double x, exact = 0;
    double result;
    puts("Введите через пробел значения x и точности");
    scanf("%lf %lf", &x, &exact);
    result = sinx(x, exact);
    printf("sinx = %G", result);

}




