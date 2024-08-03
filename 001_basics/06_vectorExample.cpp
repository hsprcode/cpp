#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << endl;
    cout << endl;
    vector<int> numb;

    cout << "vector size before any push_back: " << numb.size() << endl;

    numb.push_back(47);
    numb.push_back(83);
    numb.push_back(5);

    
    cout << "vector size after push_back(s): " << numb.size() << endl;
    cout << "vector's 3rd element is: " << numb[2] << endl;
    numb[2] = 13;
    cout << "vector's 3rd element after modification is: " << numb[2] << endl;

    
    cout << endl;
    cout << endl;
    return (0);
}