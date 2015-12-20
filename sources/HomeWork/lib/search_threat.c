#include <stdio.h>
#include <stdlib.h>
#include "search_threat.h"

int search_threat(int xking, int yking, int xladya, int yladya, int xslon, int yslon)
{
    int threat;

   if (xking==xladya) threat = 1;
   if (yking==yladya) threat = 2;
   if ((abs(xking-xslon))==(abs(yking-yslon))) threat = 3;

    return (threat);

}
