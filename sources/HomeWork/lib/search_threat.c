#include <stdio.h>
#include "search_threat.h"

struct shahmati {
    int king;
    int ladya;
    int slon;
};

void search_threat()
{
    struct shahmati x, y;

    if (x.king==x.ladya) puts ("Угроза от ладьи");
    if (y.king==y.ladya) puts ("Угроза от ладьи");
    if ((abs(x.king-x.slon))==(abs(y.king-y.slon))) puts ("Угроза от слона");

}
