#include <iostream>
#include <vector>

using namespace std;

int main() {

    char ch[] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++) {
        cout << "At index " << i << " arr is: " << ch[i] << endl;
    }

    // can array can also be 
    char name[] = "Ayush";
    cout << name[2] << endl;


    /**
     * In C++ programming, a loop is an instruction that is used to repeatedly execute a code until a certain condition is reached. They are useful for performing repetitive tasks without having to write the same code multiple times.
    
     Loops can be classified on the basis of the sequency in which they check the condition relative to the execution of the associated block of code.

        * Entry Controlled loops: In this type of loop, the test condition is tested before entering the loop body.
        * Exit Controlled Loops: In this type of loop, the test condition is tested or evaluated at the end of the loop body. Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false.
    */

    // Range-Based for Loop in C++
    vector<int> v = {1, 2, 3, 4, 5};

    for (auto i : v) {
        cout << i << " ";
    }
    cout << "\n";
    // The `auto` keyword in C++ specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime.


    // WHILE
    int j = 0;

    while (j < 5) {
        cout << "J is: " << j << ", ";
        j++;
    }
    cout << "\n";

    /**
    do while Loop

    The do-while loop is also a loop whose execution is terminated on the basis of test conditions. The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop body, i.e. do-while loop is exit controlled whereas the other two loops are entry-controlled loops. So, in a do-while loop, the loop body will execute at least once irrespective of the test condition.
    */

    do {
        cout << "While is false but this will still execute" << endl;
    } while(false);

    // do while with valid condition
    int z = 0;
    cout << "do while z is: ";
    do {
        cout << z << ", ";
        z += 2;
    } while (z < 8);
    cout << "\n";

    // infinite loops can be created by creating a condition that never fails like while(true) do-while(1 or true)
    // using for we can do like this
    int a = 0;
    for(;;) {
        cout << a << endl;
        a += 5;

        if (a == 25) break;
    }

    // Use Multiple Loop Variables in for Loop
    // Defining two variable
    int m, n;

    // Loop having multiple variable and updations
    for (m = 1, n = 1; m <= 3, n <= 5; m += 1, n += 1) {
        cout << "iteration " << m << endl;
        cout << "m is: " << m << endl;
        cout << "n is: " << n << endl;
    }


    // In C++, the range-based for loop introduced in C++ 11 is a version of for loop that is able to iterate over a range. This range can be anything that is iteratable, such as arrays, strings and STL containers. It provides a more readable and concise syntax compared to traditional for loops.
    int arr[] = {7, 16, 21, 44, 55, 69};
    for (int a : arr) {
        cout << a << ", ";
    }
    cout << '\n';
}