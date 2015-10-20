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
    Cell *top;//current last value pushed
  public:
    Stack(void); //constructor of empty stack (NULL top)
    bool empty(void);
    int giveTop(void);
    void push(int);
    int pop(void);
};

#endif // STACK_HPP