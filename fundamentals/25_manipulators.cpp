/** 

Manipulators are helping functions that can modify the input or output stream. They can be included in the I/O statement to alter the format parameters of a stream. They are defined inside <iomanip> and some are also defined inside <iostream> header file.

*/

/* For example, if we want to print the hexadecimal value of 100 then we can print it as:*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << setbase(16) << 100 << endl; 


    // Output stream manipulators

    // output the new line and flush the stream
    cout << "Hello" << endl;

    // since above we have mentioned output stream to 16 base hence now we again need to base 10 so we can use any one of the following ---
    cout << dec;
    // cout << setbase(10);
    // --- 

    // set width of the next output field to x ~ generally gives space before that number
    cout << setw(14) << 13 << endl;


    // Set precision to 3 for floating-point numbers
    cout << setprecision(3) << 3.1478965 << endl;


    // Use fixed-point notation
    cout << fixed << 5.21459 << endl;


    // use scientific notation
    cout << scientific << 7.365487 << endl;


    // show the decimal point even for the whole numbers
    cout << showpoint << 42.01 << endl;


    /** 2. Input Stream Manipulators */

    char c1, c2;

    // this one generally skkips the white space
    cout << "Enter chars: ";
    cin >> c1;


    // if we dont want to skip white space
    cin >> noskipws >> c2;

    cout << "c1: " << c1 << ", c2: " << c2 << endl;
    /** 
     -> what happens here is that

     1. User inputs:
        g n ((The user types 'g', then a space, then 's'.))

     2. First cin >> c1; (Normal cin Extraction)
        - cin >> c1; skips any leading whitespace (default behavior).
        - It reads 'g' into c1.
        - The input buffer now holds:
            --" s"  (space before 's')   
     3. Second cin >> noskipws >> c2;
        - noskipws disables whitespace skipping.
        - So, the next character in the input buffer (which is a space ' ') is read as-is into c2.    
    */


    /** 
     * 3. Boolean Manipulators
        - Boolean manipulators are used to format boolean values in output. They allow displaying boolean values as true or false or as 1 and 0, depending on the requirement.
    */
    
    bool value = true;

    cout  << boolalpha << value << endl;    // this prints true or false

    cout  << noboolalpha << value << endl;  // while this prints 1 or 0


    /**  
     * 4. Alignment and Sign Manipulators
        - These manipulators control how text and numbers are aligned or how their signs are displayed in the output.
    */
    int n = 42;

    // Align output to the left
    cout << left << setw(10) << n << endl;

    // Align output to the right
    cout << right << setw(10) << n << endl;

    // Show positive sign for numbers
    cout << showpos << n << endl;

    // Don't show positive sign for numbers
    cout << noshowpos << n << endl;


    /** 
     * 5. Base Manipulators
         - Base manipulators are used to format numbers in different bases, such as decimal, hexadecimal, or octal. They help in representing numbers in a way suited to specific applications.
    */
    
    int n1 = 76;


    cout << hex << n1 << endl;
    cout << dec << n1 << endl;

    cout << oct << n1;

    return 0;

}