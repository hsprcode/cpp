#include <iostream>
#include <vector>

using namespace std;
int main() {
    cout << endl;
    cout << endl;

    vector<int> numbersVector = {12, 25, 31, 47, 58, 79};
    float average;

    cout << "numbersVector is type: " << typeid(numbersVector).name() << endl;

    average = 0.0f;
    for (int i = 0; i < numbersVector.size(); i++)
        average += numbersVector[i];
    average /= numbersVector.size();
    cout << "Average: " << average << endl;

    average = 0.0f;
    for (auto x : numbersVector)
        average += x;
    average /= numbersVector.size();
    cout << "Average: " << average << endl;
       
    
    cout << endl;
    cout << endl;
    return (0);
}