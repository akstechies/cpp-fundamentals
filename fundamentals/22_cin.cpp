/**
In C++, cin is an object of istream class that is used to accept the input from the standard input stream i.e. stdin which is by default associated with keyboard. The extraction operator (>>) is used along with cin to extract the data from the object and insert it to the given variable.
*/

#include <iostream>
#include <limits>

using namespace std;


int main() {

    int a;

    cout << "ENTER NO.: ";
    cin >> a;

    cout << a << endl;

    /**
    * >>: It is the extraction operator to extract data from cin.
    * var_name: It is a variable that will store the input data provided by the user.

    Note: cin is initialized when the program starts to make sure it is ready for input operations. It is also linked to cout to ensure that any buffered output is flushed before cin reads from the input stream.
    */


    // let us take multiple inputs from the user
    // in this process we will take input in spaces such as ~ Ayush 29

    string name;
    int age;

    cout << "Hey user please input your name and age: ";
    cin >> name >> age;

    if (age > 18) {
        cout << "Welcome " << name << " as per your age of " << age << " you are eligible for voting in J&K" << endl; 
    } else {
        cout << "Wait " << name << " your age " << age << " is less than the required age so you cannot vote" << endl;
    }


    // when I was not using this below line code what happened that the below line was not taking input. The issue arises because the input buffer still contains a newline character (\n) from the previous cin >> operation. When you use cin.get(), it reads the leftover newline character instead of waiting for new input.

    /**
     * cin >> skips whitespace (like spaces and newlines), so it stops reading when it encounters whitespace but doesn't consume the newline character left after the user presses "Enter".
     * When cin.get() is called, it reads the first character in the buffer, which is the leftover newline (\n), and doesn't wait for further input.
    */

    /**
        It uses `#include <limits>` header

        * cin.ignore(): Discards characters from the input buffer up to a specified limit or until a specific character (like \n) is encountered.
        * numeric_limits<streamsize>::max() ensures it clears the entire buffer.
        * The second parameter, '\n', tells it to stop ignoring characters after encountering a newline.
        * This ensures that cin.get() works as expected and waits for new input.
    */
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
    /** cin Member Functions in C++ */

    // 1. cin.get() ~ Reads a single character from the input stream, including whitespace.
    // as ealier we saw that with `cin >> var`, when we entered `Inpt1 Inpt2` and then press enter then only `Inpt1` was getting used as cin stops reading after white space find so to overcome this we can use cin.get()

    char full_name[30];
    cout << "ENter full name: ";
    cin.get(full_name, 25);
    cout << "WELCOME " << full_name << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // 2. cin.getline() ~ Reads a line of text, including whitespace, and stops when it reaches a newline character. It reads a stream of characters of given length N into the string buffer. It stops when it has read (N – 1) characters or it finds the end of the file or newline character(\n).

    char college[5];
    cout << "Enter your college name: ";
    cin.getline(college, 3);
    cout << "COllege is " << college << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // 3. cin.read() ~ It reads a stream of characters of given length N. It will read until the character given limit has met

    char stream[30];
    cout << "What stream have you chosen?";
    cin.read(stream, 10);
    cout << "Great choice of: " << stream << endl;


    // NOTE: It ignores or clears one or more characters from the input buffer.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}