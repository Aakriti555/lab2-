#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

#include "queue.h"
#include "LinkedList.cpp"

class  linkedlistqueue:public queue{
    public:
    LinkedList l3;

    void enQueue(int item);
    int deQueue();
    bool isEmpty();
    bool isFull();
    int viewFront();
    int viewBack();
};

#endif