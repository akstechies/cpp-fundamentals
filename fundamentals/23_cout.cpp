// In C++, cout is an object of the ostream class that is used to display output to the standard output device, usually the monitor. It is associated with the standard C output stream stdout. The insertion operator (<<) is used with cout to insert data into the output stream.

#include<iostream>

using namespace std;

int main() {

    cout << "Hello World" << endl;

    // displaying multiple variables
    string name = "Ayush";
    int age = 29;

    cout << "Hello " << name << " aged: " << age << endl;


    // some member functions
    // ##. .write(var, n) ~ to print the first n characters

    char full_name[] = "Ayush Anand Srivastava";
    
    // print the first 8 characters
    cout.write(full_name, 8);

    cout << endl << flush;
    
    // it only writes single character to output stream, string will give error
    char ch = 'E';
    cout.put(ch);
     cout << endl;

    //  ##. sets the decimal precision for floating point numbers
    // suppose we have a decimal point upto `n or more digits` but we need to display only few say 3, so we can use . .precision(2 or any number) and then do cout

    double pi = 3.14324455445;
    cout << pi << endl;     // this prints limited only ~ 3.14324
    cout.precision(7);
    cout << pi << endl;     // now this will round off ~ if precision is less then it round off to nearest else if greater then it adds some random values 


    return 0;
}