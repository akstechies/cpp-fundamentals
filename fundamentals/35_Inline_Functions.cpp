#include <iostream>
using namespace std;

// ✅ Declaring an inline function
inline int square(int x) {
    return x * x;
}

#define SQUARE(x) (x * x)


/**
🔹 All functions defined inside a class are implicitly inline.
🔹 No need to use the inline keyword explicitly.
*/
class MathOperations {
public:
    // Inline function inside class (implicitly inline)
    int square(int x) {
        return x * x;
    }

    // ✅ Explicitly Defining an Inline Function Outside the Class
    inline int cube(int x); // Declaration
};

// Inline function defined outside the class
inline int MathOperations::cube(int x) {
    return x * x * x;
}







int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 8: " << square(8) << endl;


    cout << "Macros Square of 5: " << SQUARE(5) << endl;  // ✅ Works fine
    // ❌ Issue: Unexpected behavior with expressions → (5 + 1 * 5 + 1) → (5 + 5 + 1) → 11 ❌ (wrong)
    cout << "Square of (5+1): " << SQUARE(5 + 1) << endl;
    // hence to solve this issue macros are used 


    MathOperations mathOperations;
    cout << "mathOperations square: " << mathOperations.square(7) << endl;
    cout << "mathOperations cuber: " << mathOperations.cube(7) << endl; 

    return 0;
}

/***

An inline function is a function that is expanded at compile time rather than being called normally. This reduces function call overhead and improves performance for small functions.

🔹 How Inline Functions Work
When you declare a function as inline, the compiler replaces the function call with the actual function code wherever it is used.

Instead of:
result = square(5);  // Function call

The compiler directly replaces it with:
result = 5 * 5;  // Inline expansion

🔹 When to Use Inline Functions?
✅ Good use cases:
 - Small functions (1-3 lines)
 - Frequently called functions inside loops
 - Performance-critical code where function call overhead matters
❌ Avoid inline for:
 - Large functions (causes excessive code duplication)
 - Recursion (inline won’t work)
 - Functions with loops or complex logic (inline may be ignored)

🔹 Inline Functions vs Macros
Before inline, macros (#define) were used:
#define SQUARE(x) (x * x)
🚨 Problems with Macros:

No type checking
Side effects (e.g., SQUARE(5+1) expands to (5+1 * 5+1))
Hard to debug
✅ Inline functions fix these issues and are type-safe!

*/




