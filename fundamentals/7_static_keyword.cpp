

#include <bits/stdc++.h>

using namespace std;

void func1() {
    // In a function, when a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call.

    static int var1 = 0;
    var1++;

    cout << var1 << endl;

}

class Class1 {
    // As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static member variables in a class are shared by the objects. There cannot be multiple copies of the same static variables for different objects. Also because of this reason static variables cannot be initialized using constructors.
    public:
        static int var2;

        Class1() {
            // pass
        }
};

// The compiler doesn't allow the definition of a static member variable within the class definition. In C++, static member variables must be defined outside the class after the class definition, but without the int type in front of the qualified name.
int Class1::var2 = 15;

class Class2 {
    public:
        // Just like the static data members or static variables inside the class, static member functions also do not depend on the object of the class. We are allowed to invoke a static member function using the object and the ‘.’ operator but it is recommended to invoke the static members using the class name and the scope resolution operator. Static member functions are allowed to access only the static data members or other static member functions, they cannot access the non-static data members or member functions of the class. 
        static void displayName() {
            cout << "Class name is Class2" << endl;
        }
};

// Global Static Variable
// A global static variable in C++ is a static variable declared outside of any class or function. Unlike regular global variables, a global static variable has internal linkage, meaning it is accessible only within the file where it is defined. This ensures that its scope is limited to the current translation unit, preventing conflicts with variables in other files that may have the same name.
static int static_count = 0;

void increment() {
    static_count++;
    cout << "Count is: " << static_count << endl;
    // since count is static variable the value will be preserved hence when we called this function multiple time so count value will be preserved and so it will be incremented. If is not static then the value won't be preserved and will see same values
}

int main() {

    // so what will happen is that static variable is defined inside the function so the values are preserved
    for (int i = 0; i < 5; i++) func1();    // another way to write for loop

    // Define static variables outside the class
    cout << "var2: " << Class1::var2 << endl;

    Class1 class1;  // this also works but generally  we can call directly from class without using any object as above
    cout << "var2 obj: " << class1.var2 << endl;


    // Static Member Functions in a Class
    Class2::displayName();      // here we can see we can directly call the static function using class without creating the object but creating the object also works 

    // calling static global variable via function and we can see the values are getting increment as the static values are preserved
    increment();
    increment();
    increment();

    return 0;

} 