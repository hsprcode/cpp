#include <iostream>

using namespace std;

int square(int x) {
    x = x * x;
    return x;
}

void swap(int *x, int *y) {
    // *x is a int pointer, x is &a, so *x points to actual value of a
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    cout << endl;
    cout << endl;

    int a = 4, b;
    
    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;

    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    
    cout << endl;
    cout << endl;
    return (0);
}