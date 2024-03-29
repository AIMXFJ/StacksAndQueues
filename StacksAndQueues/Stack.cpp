#include "Stack.hpp"
#include <stdlib.h>
#include <iostream>
#include "Cell.hpp"

Stack::Stack()
{
    this->top = NULL;
}

int Stack::giveTop()
{
    return this->top->getElement();
}

bool Stack::empty()
{
    if (top==NULL) {
        return true;
    } else return false;
}

void Stack::push(int value)
{
    Cell* newElement = new Cell(value,NULL);
    if (top!=NULL) {
        newElement->setNext(top);
    }
    this->top = newElement;
}

int Stack::pop()
{
    if (this->empty()) {
        return 0;
    } else {
        Cell* aux;
        int value;
        aux=this->top;
        this->top = this->top->getNext();
        value=aux->getElement();
        delete(aux);
        return value;
    }
}

