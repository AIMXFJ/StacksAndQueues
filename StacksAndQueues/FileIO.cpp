#include "FileIO.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "Cell.hpp"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

FileIO::FileIO() //Does this really do anything?
{
}

void FileIO::readFile(Stack &stackOdd, Queue &queueEven, Queue &queueNeg) 
{ //we're modifiyng these, so we pass by reference
    //add later
}

void FileIO::writeFile(Stack* stackOdd, Queue* queueEven, Queue* queueNeg)
{ //no need for references here as the program is ending. D E S T R O Y THEM
    int aux;
    ofstream myfile;
    myfile.open ("output.numbers.txt");
    while (!stackOdd->empty()) { //starts with stack
        aux = stackOdd->pop();
        if (stackOdd->empty()) { //check if  we should add a comma or not
            myfile << aux; 
        }
        else myfile << aux << ',';
    }
    myfile << ".\n"; //ends by adding a '.' and jumping to next line
    while (!queueEven->empty()) {
        aux = queueEven->dequeue();
        if (queueEven->empty()) { 
            myfile << aux; 
        }
        else myfile << aux << ',';
    }
    myfile << ".\n";
    while (!queueNeg->empty()) {
        aux = queueNeg->dequeue();
        if (queueNeg->empty()) { 
            myfile << aux; 
        }
        else myfile << aux << ',';
    }
    myfile << "."; //last line
    myfile.close();
}

