#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue()
{
    begin_of_queue = 0;
    end_of_queue = 0;

}

Queue::Queue(const Queue &OtherQueue):
    begin_of_queue(OtherQueue.begin_of_queue),
    end_of_queue(OtherQueue.end_of_queue)


{
    for (i=0; i<50; i++)
        q[i]=OtherQueue.q[i];

}

Queue::~Queue()
{

}

Queue::plus_element(int element)
{
    if (end_of_queue == 49)
        cout<<"Очередь заполнена \n";
    q[end_of_queue] = element;
    end_of_queue++;

    return 0;
}

Queue::minus_element()
{
    if (begin_of_queue == end_of_queue)
        cout<<"В очереди нет эелементов \n";

    for (i = 0; i<49; i++)
        q[i] = q[i+1];

    return 0;
}


Queue::print_queue()
{
    if (begin_of_queue == end_of_queue)
        cout<<"В очереди нет элементов \n";

    for (i=0; i<50; i++)
        cout<<q[i]<<" ";

    return 0;
}
