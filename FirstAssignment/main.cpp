#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main () {
    //Write
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "1345,443,233."; //writes some numbers and a . delimiter (like we're asked to)
    myfile.close();
    
    //Read
    ifstream myReadFile;
    myReadFile.open("example.txt");
    char check='a';
	int num;
    if (myReadFile.is_open()) {
        do {
			myReadFile >> num; //reads int. Will read all digits until a ,
			myReadFile.get(check); //gets char to check if '.' (doesn't print ',')
			std::cout << num << ' '; //print WHOLE number. We'll just process the read number later
		} while (check!='.');
    } else { //let's keep this check just in case
		std::cout << "File couldn't open. Aborting\n";
		return 1;
	}
    myReadFile.close();
	getch(); //this just waits for imput before finishing. Uses conio.h
    return 0;
}