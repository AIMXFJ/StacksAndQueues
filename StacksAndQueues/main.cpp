#include <stdlib.h>
#include <iostream>
#include <conio.h> //for getch. (press key to continue)
#include "Stack.hpp"
#include "Queue.hpp"
#include "Cell.hpp"
#include "FileIO.hpp" //do we need to declare all this? woah

//declaration of objects to be used. They're global!
Stack* stackOdd = new Stack();
Queue* queueEven = new Queue();
Queue* queueNeg = new Queue();

void processNumber(int num) {
    //Decides where to store a number
    if (num<0) { //if negative
        queueNeg->enqueue(num); //goes to neg queue
    } else if ((num%2)==0) { //if even (0 counts)
        queueEven->enqueue(num); //goes to even queue
        } else { //else odd
            stackOdd->push(num);
        }
}

int main()
{
    FileIO* fileManager = new FileIO(); //declare file manager 
    int choice = 0; //variable to choose option. Options are 1-5 so we start on 0
    //here we should call fileManager to read file, but it's not implemented yet!
    int aux=0; //aux for checks
    int numAux; //aux to read numbers
    //now we enter menu loop!
    do
    {
        std::cout << "-.-.- Stacks and Queues -.-.-\n"; 
        std::cout << "Please choose an option by writing its number: \n";
        std::cout << "  1) Process number\n";
        std::cout << "  2) Query stack\n";
        std::cout << "  3) List even queue\n";
        std::cout << "  4) List negative queue\n";
        std::cout << "  5) Exit\n\n";
        std::cin >> choice; //yes this is user input
        switch (choice)
        {
            case 1:
                std::cout << "Write the number to process\n";
                std::cin >> numAux;
                processNumber(numAux);
                std::cout << "\nDone!";
                getch();
                break; //mandatory in switches and breaks my heart
            case 2:
                aux = stackOdd->pop();
                if(aux==666){ //this is an even number to check if empty, it won't be in the stack
                    std::cout << "I am empty";
                }else{
                    std::cout << aux;
                }
                getch();
                break;
            case 3:
                queueEven->listQueue(); //it prints on its own
                getch();
                break;
            case 4:
                queueNeg->listQueue();
                getch();
                break;
            case 5:
                fileManager->writeFile(stackOdd, queueEven, queueNeg);
                break; 
            default:
                std::cout << "Not a valid option. Try again.";
                getch();
                break;
        }
    system("cls"); //clear the screen and print menu again
    } 
    while (choice != 5); //5 is exit
    //exit has been chosen. Close
	return 0;
}
