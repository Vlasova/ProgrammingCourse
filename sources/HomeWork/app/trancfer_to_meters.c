#include <stdio.h>
#include "trancfer_to_meters.h"

void trancfer( double sazhen, double arshin, double vershok)
{

    puts("Введите через пробел количество саженей, аршинов и вершков");
    scanf("%lf %lf %lf", &sazhen, &arshin, &vershok);
    double trancfer_to_meters(sazhen, arshin, vershok);

}

