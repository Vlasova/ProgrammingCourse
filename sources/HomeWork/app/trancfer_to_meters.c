#include <stdio.h>
#include "trancfer_to_meters.h"
#include "trancfer_to_meter.h"

void trancfer()
{
    double sazhen, arshin, vershok;
    double result1 = 0;
    puts("Введите через пробел количество саженей, аршинов и вершков");
    scanf("%lf %lf %lf", &sazhen, &arshin, &vershok);
    result1 = trancfer_to_meters(sazhen, arshin, vershok);
    printf("%lf м", result1);

}

