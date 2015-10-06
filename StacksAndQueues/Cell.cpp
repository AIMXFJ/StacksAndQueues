#include <stdlib.h>
#include "Cell.hpp"

Cell::Cell(int e, Cell *next)
{
    this->element = e;
    this->next = next;
}

void Cell::setElement(int e)
{
    this->element = e;
}

void Cell::setNext(Cell *c)
{
    this->next = c;
}

int Cell::getElement()
{
    return element;
}

Cell* Cell::getNext()
{
    return next;
}
