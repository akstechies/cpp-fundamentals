#include <iostream>
// #include <bits/stdc++.h>
#include <fstream>

using namespace std;


int main() {

    cerr << "It is an error \n";

    cout <<  "Standard Output" << endl;


    /* cerr is defined inside the <iostream> header file and is similar to the standard output stream. */

    /**
     * Unbuffered Output: cerr outputs data immediately, which means it does not store the data in a buffer. This makes it ideal for error messages, as they need to be displayed right away.
     * Separation of Error Messages: By using cerr, error messages can be distinguished from regular program output, which typically uses cout. This separation helps in logging and debugging.
     */


    //  understand by a programming when a number will be divided by zero

    int num1, num2;
    cout << "Enter two nos: ";
    cin >> num1 >> num2;

    if (num2 == 0) {
        cerr << "Error! Cannot be divided by zero";
        return 1;
    }

    cout << "Output is: " << num1/num2 << endl;


    /**
    * Redirecting cerr to a File
    Although cerr is typically used to output errors to the console, it can also be redirected to a file. This can be helpful when you need to log errors in a program.
    */

    // Creating ostream to a log file

    /*
     * for ofstream use one of the following headers
        - #include <bits/stdc++.h> OR
        - #include <fstream>
    */
    ofstream errorLog("error_log.txt");
    // Redirect cerr to the file
    cerr.rdbuf(errorLog.rdbuf());

    cerr << "This is an error msg written to a file" << endl;

    errorLog.close();

    return 0;

}