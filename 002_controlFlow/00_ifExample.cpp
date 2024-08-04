#include <iostream>

using namespace std;

int main() {
    cout << endl;
    cout << endl;

    int a = 597;

    if (a > 500) {
        cout << "a is greater than 500" << endl;
    }

    // no brackets needed
    if (a > 500) 
        cout << "a is greater than 500" << endl;

    if (a % 2)
        cout << "a is odd" << endl;
    else
        cout << "a is even" << endl;



    bool binaryCondition = false;
    cout << "binaryCondition: " << binaryCondition << endl;
    if (binaryCondition)
        cout << "binaryCondition is true" << endl;
    else
        cout << "binaryCondition is false" << endl;


    
    char theCharacter = 'g';
    cout << theCharacter << " is ";
    if (theCharacter != 'a' && theCharacter != 'e' && theCharacter != 'i' && theCharacter != 'o' && theCharacter != 'u' &&
        theCharacter != 'A' && theCharacter != 'E' && theCharacter != 'I' && theCharacter != 'O' && theCharacter != 'U')
        cout << "not ";
    cout << "a vowel" << endl;

    
    
    cout << endl;
    cout << endl;
    return (0);
}