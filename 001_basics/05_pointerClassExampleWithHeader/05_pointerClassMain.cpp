#include <iostream>
#include <string>
#include "human.h"

// this code won't compile by default because we have another dependent human.cpp file.
// to compile: open the .vscode/task.json change ["tasks"]["args"][2] i.e "${file}" to "${fileDirname}/**.cpp". 
// The index (["tasks"]["args"][index]) might be different, basically the change is needed for the argument "-g".

using namespace std;

int main() {
    cout << endl;
    cout << endl;

    human *my_humanPointer; // pointer

    my_humanPointer = new human("Harry", 17, human_personality::creative); // memory 
    
    cout << (*my_humanPointer).get_name() << " is a " << (int) (*my_humanPointer).get_personality() << " human." << endl; // this line and the next line are the same
    cout << my_humanPointer->get_name() << " is a " << (int) my_humanPointer->get_personality() << " human." << endl;
    // The absence of a default reverse-map for enum classes in C++ is due to the language design. 
    // Enumerations are typically used for symbolic constants, and their primary purpose is to provide a set of named values. 
    // Enumerations are not inherently designed for bidirectional mapping between integer values and enum class values.

    cout << my_humanPointer->get_name() << " is " << my_humanPointer->get_age() << " years old." << endl;
    
    delete my_humanPointer;
    cout << endl;
    cout << endl;
    return (0);
}