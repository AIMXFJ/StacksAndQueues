#include "FileIO.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "Cell.hpp"
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

FileIO::FileIO() //Does this really do anything?
{
}

void processNumber(int num, Stack* stackOdd, Queue* queueEven, Queue* queueNeg) {
    //Decides where to store a number
    if (num<0) { //if negative
        queueNeg->enqueue(num); //goes to neg queue
    } else if ((num%2)==0) { //if even (0 counts)
        queueEven->enqueue(num); //goes to even queue
        } else { //else odd
            stackOdd->push(num);
        }
}

void FileIO::readFile(Stack* stackOdd, Queue* queueEven, Queue* queueNeg) 
{ 
    ifstream myReadFile;
    myReadFile.open("input.numbers.txt");
    char check='a';
    int num;
    if (myReadFile.is_open()) {
        for (int i=1;i<=3;i++) { //do it three times
            check='a'; //reset check so it won't see a '.'
            do{ 
                myReadFile >> num; //reads int. Will read all digits until a ','
                this->processNumber(num, stackOdd, queueEven, queueNeg);
                myReadFile.get(check); //gets char to check if '.' (doesn't print ',')
                std::cout << num << ' '; //print whole number. We'll just process the read number later
            } while (check!='.');
        }
    } else { //let's keep this check just in case
        std::cout << "File couldn't open. Aborting\n";
        return;
    }
    myReadFile.close();
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

