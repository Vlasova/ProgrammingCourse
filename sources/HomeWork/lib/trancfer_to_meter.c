#include <stdio.h>
#include "trancfer_to_meter.h"

double trancfer_to_meters (double sazhen, double arshin, double vershok)
{
    double sm;
    double m;
    arshin = sazhen * 3 + arshin;
    vershok = arshin * 16 + vershok;
    sm = vershok * 4.445;
    m = sm/100;

    printf("%lf м", m);



}
