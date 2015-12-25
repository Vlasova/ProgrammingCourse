#include<iostream>
#include "queue.h"

using namespace std;

int main()
{

    Queue a;
    a.minus_element();
    a.plus_element(3);
    a.plus_element(12);
    a.plus_element(45);
    a.plus_element(50);
    a.plus_element(16);
    cout <<a.print_queue()<<"\n";
    a.minus_element();
    cout<<a.print_queue()<<"\n";


}

