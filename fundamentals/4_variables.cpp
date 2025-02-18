#include <iostream>

using namespace std;

int extern_var = 10;

int main() {

    int age;

    cout << age;    // here on printing we will get some random values and this is a garbage value bcoz till now we have only declared variable but haven't assigned any value

    age = 10;

    int var1 = 112;
    

    // multiple variables
    char a = 'A', b = 'B';

    /** Memory Management of Variables */
    // When a variable is declared, the compiler is told about the variable name and the type of data it will store. It is not allocated the any memory at this point. It is when the variable is defined it is allocated the memory. The amount of memory allocated depends upon the type of data that a variable intends to store.
    // Initially, the variable only stores some garbage value (value that does not mean anything). At the time of initialization, it is assigned some meaningful value that using the assignment operator that is then stored in the memory allocated to the function. So basically, we are manipulating a specific part of memory using the variable name.

    return 0;
};