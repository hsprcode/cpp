#include <iostream>

using namespace std;

int main() {
    cout << endl;
    cout << endl;

    float firstNumber, secondNumber, result;
    char action;

    cout << "type firstNumber and press Enter: ";
    cin >> firstNumber;
    cout << "type secondNumber and press Enter: ";
    cin >> secondNumber;
    cout << "type the action [ + - * / ] and press Enter: ";
    cin >> action;

    switch (action) {
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '/':
            result = firstNumber / secondNumber;
            break;
        default:
            result = firstNumber + secondNumber;
            break;
    }

    cout << "Result of the action by secondNumber on the firstNumber: " << result << endl;
    
    
    cout << endl;
    cout << endl;
    return (0);
}