// The data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. They are generally the data types that are created from the primitive data types and provide some additional functionality.

#include <iostream>

using namespace std;

/** Functions */
// A function is a block of code or program segment that is defined to perform a specific well-defined task. It is generally defined to save the user from writing the same lines of code again and again for the same input. All the lines of code are put together inside a single function and this can be called anywhere required.
int max(int x, int y) {
    if (x > y)
        return x;
    else 
        return y;
}

int main() {
    cout << "Max is: " << max(10, 15) << endl;

    /** ---- ARRAYS-- */
    // An array is a collection of items stored at continuous memory locations. The idea of array is to represent many variables using a single name.
    
    int arr[5] = {1, 2, 3, 5, 8};
    arr[0] = 5;
    arr[1] = 17;

    // arr[7] = 53; // ~ saw that this is not assigning if my index given is less than the array size but if the size and index are relatable then it works

    cout << arr << endl;

    for (int i = 0; i < 5; i++) {   // if I run loop more than the given index it starts to either print 0 or any garbage value
        printf("index - %d, value - %d\n", i, arr[i]);
    }

    /** ---- POINTERS -- */
    // Pointers are symbolic representation of addresses. They can be said as the variables that can store the address of another variable as its value.

    int var = 22;
    int* ptr = &var;
    int *ptr2 = &var;
    // int ptr3* = &var;  // ~ it errrors  - expected initializer before '*' token

    cout << "Var is: " << var << endl;
    cout << "ptr is: " << ptr << endl;
    cout << "ptr2 is: " << ptr2 << endl;
    // cout << "ptr3 is: " << ptr3 << endl;
    cout << "*ptr is: " << *ptr << endl;

    *ptr = 55;
    cout << "Var changed is: " << var << endl;


    /** References */
    // When a variable is declared as reference, it becomes an alternative name for an existing variable. A variable can be declared as reference by putting ‘&’ in the declaration.

    int var1 = 793;

    int& refofVar1 = var1;
    int &ref2ofVar1 = var1;
    // int ref3ofVar1& = var1;     // ~  error: expected initializer before '&' token
    
    cout << "var1 is: " << var1 << endl;
    cout << "refofVar1 is: " << refofVar1 << endl;
    cout << "ref2ofVar1 is: " << ref2ofVar1 << endl;

    refofVar1 = 10525;
    cout << "var1 changed is: " << var1 << endl;
    cout << "refofVar1 changed is: " << refofVar1 << endl;
    cout << "ref2ofVar1 changed is: " << ref2ofVar1 << endl;



    return 0;
}