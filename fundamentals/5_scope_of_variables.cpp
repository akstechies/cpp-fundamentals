#include <iostream>

using namespace std;

// Global variable
int var1 = 10;
int global_1 = 11;

void displayVar1() {
    cout << var1 << endl;
}

// local scope
void func() {
    // it is a local variable and can be used inside this function only
    int var3 = 10;
}

int main() {

    int var2 = 20;

    std::cout << var1 << endl << var2 << std::endl;

    var1 = 50;
    displayVar1();

    // cout << var3;    // this will give error bcoz it is defined in a function and so it has a local scope  ~ we can use it in the defined function only

    /** -----------====------------------------ */
    // Variable shadowing 
    // Consider that there is a local variable inside a function with the same name as that of a global variable. If the function tries to access the variable with that name, then which variable will be given precedence?

    // so let us first print the value of global_1 variable then again redlcare it and print it
    cout << "1. " << global_1 << endl;
    
    int  global_1 = 20;
    cout << "2. " << global_1 << endl;

    // Explanation: The variable a declared at the top is global variable and stores the value 5 whereas a declared within main function is local and stores a value 100. When accessed inside the main function, the local a’s value is printed. Also, there is no compilation error. It implies that

    /**
        * If two variables with same name are defined in different scopes, the compiler allows it and does not show error.

        *Whenever there is a local variable defined with same name as that of a global variable, the precedence is given to the local variable. This is called variable shadowing.
    */

    // but us want the actual value of global variable so we can do it using `::` ~ known as scope resolution operator
    cout << "3. " << ::global_1 << endl;
    /** -----------====------------------------ */
}