/**
    The cout object in C++ is an object of class iostream. It is defined in iostream header file. It is used to display the output to the standard output device i.e. monitor.

    The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).
*/

#include <iostream>

using namespace std;

 

int main() {

    /** ------------
        Program 1: C++ program to implement cout object:
    ---------------- */ 

    cout << "Welcome to Ayush" << endl;

    //more than one string or variable
    int speed = 75;
    cout << "Ayush rides at: " << speed << " Km/h" << endl;

    /** ------------
        Program 2: member functions of the cout.write() and cout.put():
    ------------ */ 
    // String is the array of characters
    char str1[] = "My name is Ayush";
    char ch1 ='A';

    cout.write(str1, 6); // Prints the first 6 chars from str1
    cout << endl;
    cout.put(ch1);
    cout << endl;
    /** ------------
        Program 3: use of cout.precision()
    ------------ */ 

    double pi = 3.145674587466;
    cout << pi << endl;
    // set precision
    // cout.precision(80); // 3.1456745874659999273603...... will adjust the precision
    cout.precision(10);
    cout << pi << endl;
    return 0; 
}


