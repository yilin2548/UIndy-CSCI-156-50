/* Name: Yilin Liu
   Date: 1/31/18
   Desc: A program to encrypt/decrypt text entered based on command-line
         a command-line key integer.
         
         ./a.out 10  will encrypt
         ./a.out -10 will decrypt
*/
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
// Fix all indentation (2 pts)
char rotateWithinLetters(char letter, short amt){  // Remove the * before letter (2 pts)
    // For uppercase
    if(letter >= 'a' && letter <= 'z'){
        return ((letter - 'a' + amt + 26) % 26) + 'a';
    }
    // For lowercase
    if(letter >= 'A' && letter <= 'Z'){
        return ((letter - 'A' + amt + 26) % 26) + 'A';
    }
    // For all others
    return letter;
}

int main(int argc, char* argv[]){
    if(argc < 2){   // Change string "2" to integer 2 (2 pts)
        cout << "Enter a rotation amount on the command-line." << endl;  // Add missing semicolon (1 pts)
        return 0;
    }
    int amt = atoi(argv[1]);    // Change compare == to assign = (2 pts)
    cout << "Will rotate by " << amt << " characters." << endl;
      
    string input_text; //Add missing semicolon (1 pts)
    cout << "Enter text to incrypt/decrypt:";
    getline(cin, input_text);  // Correct name inputtext -> input_text (2 pts)
      
    for(unsigned i = 0; i < input_text.length(); i++){  // Change int to unsigned, to fix a warning (extra 2 pts)
        input_text[i] = rotateWithinLetters(input_text[i], amt);
    }
    cout << endl << input_text << endl;  // Change from >> to << (2 pts)
      
    return 0;
}