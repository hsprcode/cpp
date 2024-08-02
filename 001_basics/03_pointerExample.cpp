#include <iostream>
#include <string>

using  namespace std;

int main() {
    cout << endl;
    cout << endl;

    int a = 54;
    int *ptr;

    ptr = &a;

    cout << "a: " << a << endl;
    cout << "ptr is address of a (actually &a):" << ptr << endl;
    cout << "*ptr is value present in ptr (actually a):" << *ptr << endl;
    cout << "address of ptr: " << &ptr << endl;
    
    
    cout << endl;
    cout << endl;
    return (0);
}