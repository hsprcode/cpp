#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << endl;
    cout << endl;

    vector<int> numbersVector = {12, 25, 31, 47, 58};

    cout << "using while" << endl;
    vector<int>::iterator ptr = numbersVector.begin(); // auto ptr = numbersVector.begin();
    
    // (numbersVector.end() - 1) is the last pointer
    while (ptr != numbersVector.end()) {
        cout << *ptr << ", ";
        ptr = next(ptr, 1);
    }
    cout << endl;

    cout << "using do-while (Caution: this will fail if numbersVector = {})" << endl;
    ptr = numbersVector.begin(); // reset ptr to begin
    do{
        cout << *ptr << ", ";
        ptr = next(ptr, 1);
    } while (ptr != numbersVector.end());
    cout << endl;

    cout << "using do-while using array index directly (Caution: this will fail if numbersVector = {})" << endl;
    int i = 0;
    do{
        cout << numbersVector[i] << ", ";
        i++;
    } while (i < numbersVector.size());
    cout << endl;
    
    
    cout << endl;
    cout << endl;
    return (0);
}