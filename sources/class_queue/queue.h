#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
    Queue();
    Queue(const Queue &otherQueue);
    int plus_element(int element);
    int minus_element();
    int print_queue();

private:
    const int SIZE=50;
    int *queue;
    int i;
    int begin_of_queue;
    int end_of_queue;


};



#endif // QUEUE_H

