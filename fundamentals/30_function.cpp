/**
A function is a set of statements that takes input, does some specific computation, and produces output. The idea is to put some commonly or repeatedly done tasks together to make a function so that instead of writing the same code again and again for different inputs, we can call this function.


Types of func:
1. User Defined Function
    - User-defined functions are user/customer-defined blocks of code specially customized to reduce the complexity of big programs. They are also commonly known as “tailor-made functions”
2. Library Function 
    - Library functions are also called “built-in Functions“. These functions are part of a compiler package that is already defined and consists of a special function with special and different meanings. Built-in Function gives us an edge as we can directly use them without defining them whereas in the user-defined function we have to declare and define a function before using them. 
    For Example: sqrt(), setw(), strcat(), etc.
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>


using namespace std;


int max(int, int);

void func1(int x) {
    x = 30;
}

void func2(int* yPtr) {
    *yPtr = 77;
}


void printString(string myStr) {
    cout << "Your str is: " << myStr << endl;
    myStr = "NO?";
}

void printStringByReference(string& str) {
    cout << "Your reference str is: " << str << endl;
    str = "CHANGED?";
}

string employeeNameFunc(string name) {
    // transform uses ~ #include <bits/stdc++.h>
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    return name;
}

int main() {


    /*
    Parameter Passing to Functions
        The parameters passed to the function are called actual parameters. 
        The parameters received by the function are called formal parameters. 

        funcx(x, y) -> actual params
        int funcx(int x, int y) {} -> formal parameters
    */

    /*
    * There are two most popular ways to pass parameters:
    
    1. Pass by Value: In this parameter passing method, values of actual parameters are copied to the function’s formal parameters. The actual and formal parameters are stored in different memory locations so any changes made in the functions are not reflected in the actual parameters of the caller. 
    
    2. Pass by Reference: Both actual and formal parameters refer to the same locations, so any changes made inside the function are reflected in the actual parameters of the caller.
    */

    // pass by value ~ x will not change
    int x = 20;
    func1(x);
    cout << x << endl;


    // pass by reference using pointers ~ here the values will change because we are changing with address
    int y = 30; 
    func2(&y);
    cout << y << endl;



    // passing string as an argument:
    /**
     * In c++ we can pass string as as argument in various way
        Pass by Value
        Pass by Reference
        Pass by Pointer
    */

    string myString = "Hello Ayush";
    printString(myString);
    cout << myString << endl;       // unchanged

    // 2. Pass by Reference
    printStringByReference(myString);
    cout << myString << endl;       // value gets changed 


    // returning string from a func
    string employee_name =  employeeNameFunc("Ayush");
    cout << "Employee name is: " << employee_name << endl; 
    return 0;
}



