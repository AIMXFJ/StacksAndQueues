#include "FileIO.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "Cell.hpp"
#include <stdlib.h>
#include <iostream>
#include <fstream>

FileIO::FileIO() //Does this really do anything?
{
}

void FileIO::readFile(Stack &stackOdd, Queue &queueEven, Queue &queueNeg) 
{ //we're modifiyng these, so we pass by reference
    //add later
}

void FileIO::writeFile(Stack stackOdd, Queue queueEven, Queue queueNeg)
{ //no need for references here as the program is ending. D E S T R O Y THEM
    //add later
}

