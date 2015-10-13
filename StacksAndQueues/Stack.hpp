#ifndef STACK_HPP
#define STACK_HPP
#include "Cell.hpp"
/* Definition of Stack.
 * Uses Cell.
 * Doesn't have destructors either.
 */ 
class Stack
{
public:
    Cell *stack;//current last value pushed
  public:
    Stack(void); //constructor of empty stack (NULL top)
    bool empty(void);
    int top(void);
    void push(int);
    int pop(void);
    //void makeNull(void);
};

#endif // STACK_HPP