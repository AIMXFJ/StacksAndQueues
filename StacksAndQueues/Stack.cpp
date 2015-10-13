#include "Stack.hpp"
#include <stdlib.h>
#include <iostream>
#include "Cell.hpp"

Stack::Stack()
{
    this->stack = NULL;
}

int Stack::top()
{
    return this->stack->getElement();
}

bool Stack::empty()
{
    if (stack==NULL) {
        return true;
    } else return false;
}

void Stack::push(int value)
{
    Cell* newElement = new Cell(value,NULL);
    //newElement->setElement(value);
    if (stack!=NULL) {
        newElement->setNext(stack);
    }
    this->stack = newElement;
}

int Stack::pop()
{
    if (stack==NULL) {
        std::cout << "I am empty";
    } else {
        Cell* aux;
        int value;
        aux=this->stack;
        this->stack = this->stack->getNext();
        value=aux->getElement();
        delete(aux);
        return value;
    }
}
//We probably won't be using this
/*void Stack::makeNull()
{
    int aux=0;
    while (aux!=NULL){
        aux=pop();
    }
}*/

