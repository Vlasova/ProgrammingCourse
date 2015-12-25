#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue()
{
    queue = new int[SIZE];
    begin_of_queue = 0;
    end_of_queue = 0;
    for (i=0; i<SIZE; i++)
        queue[i]=0;

}

Queue::Queue(const Queue &OtherQueue):
    begin_of_queue(OtherQueue.begin_of_queue),
    end_of_queue(OtherQueue.end_of_queue)


{
    for (i=0; i<SIZE; i++)
        queue[i]=OtherQueue.queue[i];

}


Queue::plus_element(int element)
{
    try
    {
        if (end_of_queue - 1 == SIZE)
            throw 2;

        queue[end_of_queue] = element;
        end_of_queue++;

    }

    catch(int error)
    {
        cout<<"Ошибка №"<<error<<": очередь полностью заполнена"<<endl;
    }

    return 0;
}

Queue::minus_element()
{
    try
    {
        if(begin_of_queue == end_of_queue)
            throw 1;

        for (i = 0; i<=SIZE; i++)
        {
            queue[i] = queue[i+1];
            queue[SIZE]=0;

        end_of_queue--;
        }

    }

    catch(int error)
    {
        cout<<"Ошибка №"<<error<<": в очереди нет элементов"<<endl;
    }

    return 0;
}


Queue::print_queue()
{
    try
    {
      if (begin_of_queue == end_of_queue)
          throw 1;

      for (i=0; i<SIZE; i++)
          cout<<queue[i]<<" ";

    }
    catch(int error)
    {
        cout<<"Ошибка №"<<error<<": в очереди не элементов"<<endl;
    }


    return 0;
}
