//Write a program that prompts the user to input a string and outputs the string in uppercase letters. (Use a character array to store the string.)

#include <iostream>
#include <string>

using namespace std;

int main() {
    char userInput[100];
    cout << "Enter a string: ";
    
    cin .getline(userInput, 100);


    for (char &c : userInput) {
        c = toupper(c);
    }

    cout << "Uppercase: " << userInput << endl;

    return 0;
}