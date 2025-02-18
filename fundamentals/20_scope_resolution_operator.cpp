// https://www.geeksforgeeks.org/scope-resolution-operator-in-c/

// In C++, the scope resolution operator (::) is used to access the identifiers such as variable names and function names defined inside some other scope in the current scope. Let’s take a look at an example:

// The most common example is std::cout

#include <iostream>

using namespace std;

int x = 10;

/**-------------------- */
namespace MathConstants {
    const float PI = 3.14;
}

// **---------------- */

// Defining class member outside function
// It is also used to define the member function of the class outside the class template.

class Student {
    public:
        static int roll_no;
        void greetStudent();

        virtual void get_subject() {
            cout << "Discuss the subject" << endl;
        }

        void get_marks() {
            cout << "Get your marks" << endl;
        }
};

void Student::greetStudent() {
    cout << "Hey MFs, welcome to the class" << endl;
}

// Accessing class static members
int Student::roll_no = 55;

// Derived class

class Subject : public Student {
    public:
        void get_subject() override {
            cout << "Subject is maths" << endl;
        }

        void get_marks() {
            cout << "Marks is FAILED!" << endl;
        }
};

// **/*----------------




int main() {

    // The std namespace contains the declaration of cout. So, to use cout, we first need to tell the compiler that it is declared inside the std namespace which is done using ::. The compiler then resolves the cout from there.
    std::cout << "Hello bros" << std::endl;

    // Syntax ~ scope_name :: identifier - where scope_name is the name of the scope where identifier is defined.

    /*** -----==========================---- */

    int x = 73;

    // Here we can see we have 2 variables in x, one inside main and another global and as we studied earlier that variables inside function will be given 1st priority, so when we print x, the value inside main will be printed

    cout << x << endl;

    // but now I want the value of global `x` so we can use `::`
    
    cout << ::x << endl;  

    /*** -----==========================---- */
    // can be used for namespace resolution

    cout << "The value of PI is: " << MathConstants::PI << endl;


    /*** -----==========================---- */
    // class

    Student student;
    student.greetStudent();

    // Since it is not static so below will result in error
    // Student::greetStudent();     // ~  error: cannot call member function 'void Student::greetStudent()' without object

    // acccesing class static member
    /** 
        * inside class just declare the variable as static (static int var)
        * assign value to it globally with type (int Class::var = 77)
        * get the value with Class::var 
    */
    cout << "Static roll no: " << Student::roll_no << endl;

    /*** ========--------------------------------- */
    // Refer to Base Class Member in Derived Class
    // The scope resolution operator can also be used to refer to the members of base class in a derived class especially if they have the same name.

    Subject subject;

    subject.get_subject();
    subject.Student::get_subject();

    subject.get_marks();
    subject.Student::get_marks();

    return 0;

}