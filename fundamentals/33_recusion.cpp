#include <iostream>


/***
Why is // Forward declaration needed?

In C++, function declarations must be known before they are used.
The forward declaration of indirectRecursionB(int n); is required because indirectRecursionA() calls indirectRecursionB() before its actual definition.

Without Forward Declaration: Compilation Error

How Forward Declaration Fixes This
- after adding this The compiler knows that indirectRecursionB() exists, even though its definition appears later.

*/
void indirectRecursionB(int n); // Forward declaration

void indirectRecursionA(int n) {
    if (n > 0) {
        std::cout << n << " ";
        indirectRecursionB(n - 1); // Function A calls Function B
    }
}

void indirectRecursionB(int n) {
    if (n > 1) {
        std::cout << n << " ";
        indirectRecursionA(n / 2); // Function B calls Function A
    }
}


void printWithForwardDeclaration();


void directRecursion(int n) {
    if (n > 0) {
        std::cout << n << ", ";
        directRecursion(n - 1);
    } 
    return;
    
}


void printMinArrElem(int*, int*, int);


int main() {

    /* When function is called within the same function, it is known as recursion in C++. The function which calls the same function, is known as recursive function.
    A function that calls itself, and doesn’t perform any task after function call, is known as tail recursion. In tail recursion, we generally call the same function with return statement.*/

    // We have Direct recursion and in direct recursion

    // 1. Direct Recursion: ~ it can be done when the function calls itself
    std::cout << "n is: ";
    directRecursion(7);
    std::cout << std::endl;


    std::cout << "indirectRecursionA is: ";
    indirectRecursionA(10);
    std::cout << std::endl;

    printWithForwardDeclaration();

    int arr[] = {8, 5, 17, 23, 6, 44, 3, 77, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << "arr size: " << size << std::endl; 
    int min_elem = 0;       // ✅ Declare an integer, not a pointer
    printMinArrElem(arr, &min_elem, size);    // ✅ Pass the address of min_elem
    std::cout << min_elem << std::endl;
}


// the return type should be same of forward declaration bcoz cannot overload functions distinguished by return type alone
void printWithForwardDeclaration() {
    std::cout << "DECLARED" << std::endl;
}

// 1. Tail Recursion:
// Tail recursion occurs when a function makes a recursive call as its last operation, here we will see after everything recursive call is made

void tailRecursion(int n) {
    if (n > 0) {
        std::cout << n << " ";
        tailRecursion(n - 1); // Recursive call is the last operation
    }
}

// 2. Non-Tail Recursion
// Non-tail recursion occurs when a function performs some operations after the recursive call.
int nonTailRecursion(int n) {
    if (n > 0) {
        return n + nonTailRecursion(n - 1); // Recursive call is not the last operation
    } else {
        return 0;
    }
}

// C++ Passing Array to Function
// ~ find the min array element
void printMinArrElem(int arr[], int *min, int size) {
    int min_val = arr[0];

    for (int i = 0; i < size ; i++) {
        if (min_val > arr[i]) {
            min_val = arr[i];
        }
    }

    *min = min_val;     // ✅ Store the result in the memory location pointed by `min`


    // Stack overflow is one of the most common errors associated with the recursion which occurs when a function calls itself too many times. As we know that each recursive call requires separate space in the limited stack memory. When there is a large number of recursive calls or recursion goes on infinite times, this stack memory may get exhausted and may not be able to store more data leading to programs’ termination.




}










