#include <stdlib.h>
#include <iostream>
#include "Cell.hpp"
#include "Queue.hpp"

Queue::Queue()
{
    this->front=NULL;
    this->rear=NULL;
}

bool Queue::empty()
{
    if (this->front==NULL && this->rear==NULL) return true;
    else return false;
}

int Queue::giveFront()
{
    return this->front->getElement(); 
}

void Queue::enqueue(int e)
{
    if (empty()) {
        this->front = new Cell(e,NULL);
        this->rear = this->front;
    } else {
        this->rear->setNext(new Cell(e,NULL));
        this->rear = this->rear->getNext();
        rear->setNext(NULL);
    }
}

int Queue::dequeue()
{
    if (this->empty()) std::cout << "I am empty";
    else if (this->front==this->rear) {
        int auxe;
        auxe = this->front->getElement();
        delete(this->front);
        this->front = NULL;
        this->rear = NULL;
        return auxe;
    } else {
        Cell* auxc;
        int auxe;
        auxc = this->front;
        auxe = this->front->getElement();
        this->front = this->front->getNext();
        delete(auxc);
        return auxe;
    }
}

void Queue::listQueue()
{
    if (this->empty()) std::cout << "I am empty";
    else {
        Cell* aux;
        aux = this->front;
        while (aux!=this->rear) { //print everything by iterating with aux
            std::cout << aux->getElement() << ' '; //let's print a space between numbers
            aux = aux->getNext();
        }
        std::cout << this->rear->getElement(); //won't print rear, so print it manually
    }
}