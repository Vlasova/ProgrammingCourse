#include <stdio.h>
#include "sin_x.h"

double sinx (double x, double exact)
{
    double summand, result, i;
    summand=x;
    result=summand;
    i=0;
    do {
        i++;
        summand*=((-1)*x*x)/(2*i*(2*i+1));
        result+=summand;
    }
    while (summand>exact);
    return(result);

}
