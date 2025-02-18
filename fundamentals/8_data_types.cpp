#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int hex_a = 0x15;       // Using hexadecimal base value
    long b = 20;

    char c = 'C';
    char d[] = "A String";
    // char[] e = "Another string";     ~ error

    bool isTrue = true;

    float f = 11.001;
    double g = 114.655;

    // Works with warning ~  warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
    // char* my_name = "Ayush is my name bro!";
    // cout << my_name << endl;

    cout << "a: " << a << endl;
    cout << "hex_a: " << hex_a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    // cout << "e: " << e << endl;       // ~ error
    cout << "isTrue: " << isTrue << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of hex int: " << sizeof(hex_a) << " bytes" << endl;
    cout << "Size of long: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of char array: " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(isTrue) << " bytes" << endl;
    cout << "Size of float: " << sizeof(f) << " bytes" << endl;
    cout << "Size of double: " << sizeof(g) << " bytes" << endl;






    return 0;
}