// Most of the times, in competitive programming, there is a need to assign the variable, the maximum or minimum value that data type can hold but remembering such a large and precise number comes out to be a difficult job. Therefore, C++ has certain macros to represent these numbers, so that these can be directly assigned to the variable without actually typing the whole number.

// The <climits> header file in C++ defines macros that represent the upper and lower bounds of integer data types and <cfloat> defines the macros for float and double limits. These macros allow you to easily assign these extreme values to variables without manually typing them out.

#include <iostream>

// for int and char macros
#include <climits>

// for float and double macros
#include <cfloat>

#include <limits>

using namespace std;

int main() {

    cout << "char ranges from: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "nshort int ranges from: " << SHRT_MIN  << " to " << SHRT_MAX << endl;
    cout << "int ranges from: " << INT_MIN << " to " << INT_MAX << endl;

    cout << "long ranges from: " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "float ranges from: " << FLT_MIN << " to " << FLT_MAX << endl;

    // --------***------------

    // The above macro approach for the upper and lower limits of the data type is the old C language approach inherited by C++. But C++ also have its own method to provide programmers with the same information.

    // C++ offers the numeric_limits<> class template as a modern alternative to these macros. This template provides a more object-oriented approach for accessing data type limits. It is defined inside the <limits> header file.
    // ~ std::
    
    cout << "short int range from: " << numeric_limits<short int>::min() << " to " << numeric_limits<short int>::max() << endl;

    cout << "int range from: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

    cout << "long range from: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;

    cout << "float range from: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;

    cout << "char range from: " << int(numeric_limits<char>::min()) << " to " << int(numeric_limits<char>::max()) << endl;     
}