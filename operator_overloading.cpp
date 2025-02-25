#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) : value(v) {}

    // Overloading the + operator
    Number operator+(const Number& obj) {
        return Number(value + obj.value);
    }
};

int main() {
    Number a(10), b(20);
    Number c = a + b;  // Calls operator+ function
    cout << c.value;  // Output: 30
}
