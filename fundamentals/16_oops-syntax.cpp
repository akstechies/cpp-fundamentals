// Object-Oriented Programming in C++
// C++ programming language supports both procedural-oriented and object-oriented programming.

#include <iostream>

using namespace std;

// create a class that we can use in our main function
class Calculator {

    // Access modified ~ public bcoz it can be used by others also
    public: 
        // data member
        int a = 10, b = 20;

        // member function
        int addition() {
            int result = a + b;
            cout << result << endl;
            return 0;       // Found that if return is not there then it will give a warning but code executes ~ else we can use void
        }
};

// let us call the above in our main function
int main() {

    // declare the calculator object
    Calculator calculator;
    calculator.addition();      // call the function

    return 0;

}

/** 1. Class */
// A class is a user-defined data type. A class has its own attributes (data members) and behavior (member functions).

/** 2. Data Members & Member Functions */
// The attributes or data in the class are defined by the data members & the functions that work on these data members are called the member functions.
// In the above example, num1 and num2 are the data member & addition() is a member function that is working on these two data members. There is a keyword here public that is access modifiers. The access modifier decides who has access to these data members & member functions.

/** 3. Object */
// The object is an instance of a class. The class itself is just a template that is not allocated any memory. To use the data and methods defined in the class, we have to create an object of that class.
