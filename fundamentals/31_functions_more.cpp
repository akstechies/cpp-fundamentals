
#include <iostream>

using namespace std;


//returning pointer from a func
int* createArray(int size) {

    // Dynamically allocate memory for array
    int* arr = new int[size];
    cout << "initial arr is: " << arr << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }
    cout << "created arr is: " << arr << endl;
    return arr;


} 

/*** Callback function ---------------- */
// Define a call back function
typedef void(*CallbackFunc)();

// Function that takes a callback function as an argument
void performCallbackAction(CallbackFunc callBackFunc) {
    cout << "Perform some action" << endl;
    callBackFunc();
}

void myCallBack() {
    cout << "My call back called" << endl;
}
/*** -------------- */


// Function declarations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


void voidReturnFunc(void) {
    cout << ":voidReturnFunc called" << endl;
    return;
}


// function to update the original value ~ using & for reference
void increment(int& num)
{
    num++;
    cout << num << endl;
}


/** The main function is a special function. Every C++ program must contain a function named main. It serves as the entry point for the program. The computer will start running the code from the beginning of the main function. 

* int main with parameters is ~
int main(int argc, char* const argv[]) { ... return 0; }

The reason for having the parameter option for the main function is to allow input from the command line. When you use the main function with parameters, it saves every group of characters (separated by a space) after the program name as elements in an array named argv. 
Since the main function has the return type of int, the programmer must always have a return statement in the code. The number that is returned is used to inform the calling program what the result of the program’s execution was. Returning 0 signals that there were no problems.
*/
int main() {

    int size = 5;
    int* my_arr = createArray(size);

    cout << "ARRAY elems are: ";
    for (int i = 0; i < size; i++) {
        cout << my_arr[i] ;
        if ((size-1) != i) {
            cout << ", ";
        }
    }
    cout << "\n";

    cout << " ----- === --------------" << "\n";
    /**
    Callback function (function passed as an argument in other function)
        A callback function is a function that is passed as an argument to another function

        See ~ CallbackFunction
    */

    performCallbackAction(myCallBack);

    cout << " ----- === --------------" << "\n";
    /** An array of function pointer and how the elements are accessed */
    // Declare and initialize an array of function pointers

    int (*calculateFunctions[3])(int, int) = {add, subtract, multiply};
    
    
    int x = 20, y = 32;


    cout << "ADD: " << calculateFunctions[0](x, y) << endl;
    cout << "Subtract: " << calculateFunctions[1](x, y) << endl;
    cout << "Multiply: " << calculateFunctions[2](x, y) << endl;


    /***
    
    Points to Remember About Functions in C++
    1. Most C++ program has a function called main() that is called by the operating system when a user runs the program. 
    2. Every function has a return type. If a function doesn’t return any value, then void is used as a return type. Moreover, if the return type of the function is void, we still can use the return statement in the body of the function definition by not specifying any constant, variable, etc. with it, by only mentioning the ‘return;’ statement which would symbolize the termination of the function ~ voidReturnFunc()
    */

    voidReturnFunc();

    /**
    3. To declare a function that can only be called without any parameter, we should use “void fun(void)“. As a side note, in C++, an empty list means a function can only be called without any parameter. In C++, both void fun() and void fun(void) are same.
    */

    
    int number = 5;
    increment(number); // Passing 'number' by reference
    cout << "number by ref is: " << number << endl;
    return 0;
}
