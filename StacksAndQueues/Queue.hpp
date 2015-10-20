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
    int giveFront();
    void enqueue(int);
    int dequeue();
    void listQueue();

};

#endif // QUEUE_HPP
