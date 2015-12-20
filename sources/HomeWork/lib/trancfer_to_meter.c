#include <stdio.h>
#include "trancfer_to_meter.h"

double trancfer_to_meters (double sazhen, double arshin, double vershok)
{
    double m;
    double sm;
    arshin = sazhen * 3 + arshin;
    vershok = arshin * 16 + vershok;
    sm = vershok * 4.445;
    m = sm/100;

    return(m);

}
