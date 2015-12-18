#include <stdio.h>
#include "shahmati_ugroza.h"

struct shahmati {
    int king;
    int ladya;
    int slon;
};

void search_threat_reading()
{
    struct shahmati x, y;

    puts("Введите через пробел координаты короля, ладьи и слона");
    scanf("%d %d %d %d %d %d", &x.king, &y.king, &x.ladya, &y.ladya, &x.slon, &y.slon);
    void search_threat(struct shahmati);
}



