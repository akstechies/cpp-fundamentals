// In C++ programming language, literals are fundamental elements used to represent fixed values. These values can include numbers, characters, strings, and more. They are generally present as the right operand in the assignment operation.

#include <iostream>
using namespace std;

int main() {

  	// Assigning an integer value to integer variable
    int val = 22;
  	
  	cout << val << endl;
  	cout << 22 << endl << endl;
  
  	// Assigning a new value
  	val = 6;
  	cout << val << endl;
  	cout << 22 << endl;     // watch it here that 22 is a literal of integer type

    // Integer literals of different bases -------
    int dec= 42;
    int oct= 052;
    int hex= 0x2A;
    int bin= 0b101010;
    long int lint= 42L;
    unsigned int uint= 42U;
    long long int llint= 42LL;

    cout << "Decimal: " << dec << endl;
    cout << "Octal: " << oct << endl;
    cout << "Hexadecimal: " << hex << endl;
    cout << "Binary: " << bin << endl;
    cout << "Long int: " << lint << endl;
    cout << "Unsigned int: " << uint << endl;
    cout << "Long long int: " << llint << endl;

    // =============

    // float literal
    float f = 3.14f;
    // A double requires 64 bits of memory, while a float requires 32 bits. with using the f in 2.14f we tell the compiler to treat it as float so it takes less memory else by default it treats floating point number as double which takes more memory

    // double literal
    double d = 3.14;

    // long double literal
    long double ld = 3.14L;
  
  	// Scientific notation
  	long double sld = 1.22e11;

    cout << f << endl;
    cout << d << endl;
    cout << ld << endl;
  	cout << sld;

    bool isTrue = true;
    bool isFalse = false;

    return 0;
}

/**
    NOTES

    In C++, the f at the end of 3.14f serves a similar purpose as in Java: it indicates that the literal is of type float rather than the default type double for floating-point literals.

    Why f is Added:
        Default Type for Floating-Point Literals:

    In C++, floating-point literals like 3.14 are of type double by default.
    A double uses more memory (typically 8 bytes) compared to a float (typically 4 bytes).
    Explicit Type Specification:

    Adding f (or F) after the number explicitly specifies that the literal is a float.
    This can be useful for reducing memory usage or when working with functions or variables that specifically require float instead of double.

 */