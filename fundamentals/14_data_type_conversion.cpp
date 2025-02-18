// Type conversion means converting one type of data to another compatible type such that it doesn’t lose its meaning. It is essential for managing different data types in C++.

#include <iostream>

using namespace std;

int main() {

    /** 1. Implicit Type Conversion */

    /** Implicit type conversion (also known as coercion) is the conversion of one type of data to another type automatically by the compiler when needed. It happens automatically when:
        * Operations are performed on values of different data types.
        * If you pass an argument to a function that expects a different data type.
        * Assigning a value of one data type to a variable of another data type. 
    */ 

    int i = 10;
    char ch = 'c';

    i = i + ch;

    float f = i + 11.03;

    float f2 = i + 20.0;

    cout << i << endl;
    cout << f << endl;
    cout << f2 << endl;

    // It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).

    /** 2. Explicit Type Conversion */
    // C Style Typecasting ~ (type) expression;
    int var1 = 11;
    float fVar1 = float(var1);
    float f2Var1 = var1;

    cout << "var1: " << var1 << endl;
    cout << "fVar1: " << fVar1 << endl;
    cout << "f2Var1: " << f2Var1 << endl;

    float var2 = 11.36;
    int iVar2 = int(var2);
    int i2Var2 = var2;

    cout << "var2: " << var2 << endl;
    cout << "iVar2: " << iVar2 << endl;
    cout << "i2Var2: " << i2Var2 << endl;

    // for other types of casting refer
    // ~ casting_operators.cpp
}