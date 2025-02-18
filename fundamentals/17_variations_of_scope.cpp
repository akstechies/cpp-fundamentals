#include <iostream>

using namespace std;

class A {
    public:
        int var1;

        A(int val) {        // constructor
            var1 = val;
            cout << "var1 changed to: " << val << endl;    // whenever the class is called the code in constructor will run anyways
        }

        void display() {
            cout << "var1: " << var1 << endl;
        }
};

// ==----------
class Class_static_A {
    public:

    int static static_a;
};
int Class_static_A::static_a = 100;
// ==----------

// ==-NameA----------
namespace NameA {
    int intVar = 1011099;
}

int main() {    // '::main' must return 'int'

    /** 1. Instance Scope */
    // In C++, instance scope refers to the region inside a class but outside any member function of the class. The variable declared here are called instance variables and are accessible to whole class. They can be accessed by the objects of the class.
    // ~ refer to class A

    A a1(122);
    a1.display();

    A a2(177);
    a2.display();

    /** 2. Static Member Scope */
    // The static scope applies to variables and functions declared with the static keyword within the class. These variables are shared across all instances of a class and can be accessed using the class name without creating the instance.
    // ~ refer func_static_A
    cout << "static_a: " << Class_static_A::static_a << endl;

    /** 3. Namespace Scope  */
    // A namespace in C++ is a container that allows users to create a separate scope where the given variables are defined. It is used to avoid name conflicts and group related code together. These variables can be then accessed using their namespace name and scope resolution operator.
    // ~ refer namespace NameA
    cout << "NameA: " << NameA::intVar << endl;

} 