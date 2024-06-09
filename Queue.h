#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

class Queue {
public:
    Queue();
    ~Queue();

    void enqueue(const Song& song);
    void dequeue();
    Song front() const;
    bool isEmpty() const;

private:
    LinkedList list;
};

#endif // QUEUE_H
