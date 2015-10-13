#ifndef CELL_HPP
#define CELL_HPP
/* Definition of Cell.
 * Used by Stack and Queue
 * Atributes are private, so use set and gets instead.
 * There are no destroyers. Should we use them? */
class Cell
{
    int element; //where the value actually is
    Cell *next; //pointer to next value
  public:
    Cell(int, Cell*);//creates element
    void setElement(int);
    void setNext(Cell*);
    int getElement();
    Cell* getNext();
};

#endif // CELL_HPP
