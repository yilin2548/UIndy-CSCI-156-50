/*  Name: Yilin Liu
    Date: 1/24/2018
    Desc: A guideline for lab W02
*/

#include <iostream>
#include <cstdlib>

using namespace std;

// function to print line
void printLine(int len){
    cout << "print a line with length " << len << endl;
}

void printSOS(int repeat){
    cout << "print a SOS with repeat "  << repeat << endl;
}

int main(int argc, char *argv[]){
    // The type of shape depends on argv[1]
    // Because argv type is char, we need to convert 
    // it to into int to compare with int.
    if(atoi(argv[1]) == 1){
        // The length of line is defined in argv[2]
        printLine(atoi(argv[2]));
    }
    else if(atoi(argv[1]) == 2){
        printSOS(atoi(argv[2]));
    }
    
    
    
    return 0;
}
