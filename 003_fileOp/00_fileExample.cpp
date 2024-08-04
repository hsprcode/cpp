#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    cout << endl;
    cout << endl;

    ofstream outFile;
    int a = 5;
    float b = 8.02f;

    outFile.open("someValues.txt");
    if (outFile.fail())
        cout << endl << "Couldn't open the file!" << endl;
    else {
        outFile << a << endl;
        outFile << b << endl;
        outFile.close();
        cout << "File written successfully!" << endl;
    }



    ifstream inFile;
    string str;

    inFile.open("someValues.txt");
    if (inFile.fail())
        cout << endl << "File not found!" << endl;
    else{
        cout << endl << "File content is below:" << endl;
        while (!inFile.eof()) {
            getline(inFile, str);
            cout << str  << endl;
        }
        inFile.close();
    }
    
    
    
    cout << endl;
    cout << endl;
    return (0);
}