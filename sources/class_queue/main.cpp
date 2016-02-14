#include<iostream>
#include "queue.h"

using namespace std;

int main()
{

    Queue a;
    try
    {
        a.minus_element();
    }
    catch(int error)
    {
      cout<<"Ошибка №"<<error<<": в очереди нет элементов"<<endl;
    }
    try
    {
        a.plus_element(3);
    }
    catch(int error)
    {
        cout<<"Ошибка №"<<error<<": очередь полностью заполнена"<<endl;
    }


}

