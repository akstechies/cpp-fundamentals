/* Decision-making is the process to make a decision about which part of the code should be executed or not based on some condition. Decision-making in C++ involves the usage of conditional statements (also called decision control statements) to execute specific blocks of code primarily based on given situations and their results.*/

#include <iostream>

using namespace std;

int main() {

    int a = 1, b = 11;
    cout << a + b << endl;


    // 1. if Statement
    int age = 15;

    if(age > 0 && age < 18) {
        cout << "You are a kid" << endl;
    } else if (age < 60) {
        if (age == 18) {
            cout << "Hey just been adult" << endl;
        } else if(age > 25 && age < 30) {
            cout << "Do your job first" << endl;
        } else {
            cout << "YOU CAN VOTE" << endl;
        }
    } else {
        cout << "Is that an age" << endl;
    }



    // switch statement
    char c = 'C';

    switch (c) {
        case 'A':
            cout << "Letter A" << endl; 
            break;
        case 'B':
        case 'C':
            cout << "Letter " << c << endl; 
            break;
        default:
            cout << "Hey stop it" << endl;
            break;
    }


    // Ternary operator
    int num1 = 11, num2 = 20;

    int max = (num1 > num2) ? num1 : (num1 == 10 ? 101 : num2);
    cout << max << endl;


    // Jump Statements
    /* 
    A) break
        break is a control flow statement that is used to terminate the loop and switch statements whenever a break statement is encountered and transfer the control to the statement just after the loop.
    
    B) continue
        The continue statement is used to skip the loop body for the current iteration and continue from the next iteration. Unlike the break statement which terminates the loop completely, continue allows us just to skip one iteration and continue with the next iteration.
    */

    char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    for (int i = 0; i < 15; i++) {
        if (i == 3 || i == 5) {
            continue;
        } else if( i == 9 ) {
            break;
        }
        cout << arr[i] << endl;
    }


    /*
    C) goto
        It is a jump statement that is used to transfer the control to another part of the program. It transfers the control unconditionally to the labeled statement.
    */

    age = 17;

    if(age < 18) {
        goto NotEligible;
    }

    NotEligible:
        cout << "You are not eligible to vote" << endl;
    

    // The return statement is used to exit the function immediately and optionally returns a value to the calling function. It returns to the function from where it was called and if it is the 'main' function then it marks the end of the execution.
    return 0;
}

