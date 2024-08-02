#include <iostream>
#include <typeinfo>

using  namespace std;

int main() {
    
    auto a = 1234567890;
    auto b =  12345678901;
    auto c = 1.67f;
    auto d = 1.67;
    auto e = false;
    auto f = 'p';
    auto g = "something";
    float h[] = {1.5, 2.7, 8.0, 15};

    const size_t ARRAY_LENGTH = 2;
    int i[ARRAY_LENGTH];
    i[0] = 45;
    i[1] = 6500;

    cout << endl;
    cout << endl;
    cout << "a: " << a << " is type: " << typeid(a).name() << endl;
    cout << "b: " << b << " is type: " << typeid(b).name() << endl;
    cout << "c: " << c << " is type: " << typeid(c).name() << endl;
    cout << "d: " << d << " is type: " << typeid(d).name() << endl;
    cout << "e: " << e << " is type: " << typeid(e).name() << endl;
    cout << "f: " << f << " is type: " << typeid(f).name() << endl;
    cout << "g: " << g << " is type: " << typeid(g).name() << endl;
    cout << "h: " << h << " is type: " << typeid(h).name() << endl;
    cout << "i: " << i << " is type: " << typeid(i).name() << endl;

    return 0;
}