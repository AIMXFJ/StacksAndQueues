#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "Cell.hpp"
/* Definition of Queue.
 * Uses Cell.
 * This doesn't have destroyers either.
 */
class Queue
{
public:
    Cell *front;
    Cell *rear;
public:
    Queue(); //empty queue, null front + rear
    bool empty();
    int exit();
    void enqueue(int);
    int dequeue();
    void makeNull();

};

#endif // QUEUE_HPP
