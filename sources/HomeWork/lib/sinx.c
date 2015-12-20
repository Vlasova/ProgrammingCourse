#include <stdio.h>
#include "sinx.h"

double sinx (double x, double exact)
{
    double summand, sin, i;
    summand=x;
    sin=summand;
    i=0;
    do {
        i++;
        summand*=((-1)*x*x)/(2*i*(2*i+1));
        sin+=summand;
    }
    while (summand>exact);
    return(sin);

}
