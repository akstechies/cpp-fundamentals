/**
  In C++, type modifiers are the keywords used to change or give extra meaning to already existing data types. It is added to primitive data types as a prefix to modify their size or range of data they can store. 
  
  C++ have 4 type modifiers which are as follows:
    * signed Modifier
    * unsigned Modifier
    * short Modifier
    * long Modifier
*/


#include <iostream>

using namespace std;

int main() {
    // int 4 bytes
    // signed int 4 bytes
    // unsigned int 4 bytes
    // short int 2 bytes
    // long int 4 byes
    // double 8 bytes
    // long double 16 bytes

    /** 1. signed */
    // The signed modifier indicates that the given variable variables can store both positive and negative values. To specify any variable as signed, just add the keyword signed at the start of the variable declaration.
    signed int var = 5;

    cout << "signed int size: " << sizeof(signed int) << " bytes " << endl;
    cout << "int size: " << sizeof(int) << " bytes " << endl;

    /** 2. unsigned */
    // The unsigned modifier indicates that the given variables can store only non-negative or positive integer values. Like signed modifier, it is also added at the start of the variable declaration to define the given variable as unsigned.

    unsigned int var1 = -10;

    int var2 = -14;

    cout << "unsigned int size: " << sizeof(unsigned int) << " bytes " << endl;
    // As we can see, when we assigned some negative value to unsigned integer, the value gets converted to its 2’s complement because unsigned types cannot store the negative values.

    cout << "unsigned int var1: " << var1 << endl;
    cout << "int var2: " << var2 << endl;


    /** 2. short Modifier */
    // The short keyword decreases the size of the data type in the memory. It leads to the decrease in the range of value that the given data type can store. A variable can be declared as short by adding the short keyword before the variable declaration.
    
    short int var4 = 114;

    cout << "short int size: " << sizeof(short int) << " bytes " << endl;


    /** 4. long Modifier */
    // The long keyword increases the size of the data type in memory. It leads to increase in the range of value that the given data type can store. A variable can be declared as long by adding the long keyword before the variable declaration.

    long int var5 = 445;
    long double var6 = 5526;

    cout << "int size: " << sizeof(int) << " bytes" << endl;
    cout << "long int size: " << sizeof(long int) << " bytes" << endl;
    cout << "double size: " << sizeof(double) << " bytes" << endl;
    cout << "long double size: " << sizeof(long double) << " bytes";










    return 11114;
}


