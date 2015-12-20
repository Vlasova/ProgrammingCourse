#include <stdio.h>
#include "shahmati_ugroza.h"

int search_threat_reading()
{
    int xking, yking, xladya, yladya, xslon, yslon;
    int result = 0;


    puts("Введите через пробел координаты короля, ладьи и слона");
    scanf("%d %d %d %d %d %d", &xking, &yking, &xladya, &yladya, &xslon, &yslon);
    result = search_threat(xking, yking, xladya, yladya, xslon, yslon);
    if (result == 1) printf ("threat from elephant");
    if (result == 2) printf ("threat from rook");
    if (result == 3) printf ("threat from elephant");
}



