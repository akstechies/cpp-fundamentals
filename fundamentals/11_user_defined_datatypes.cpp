/**
User defined data types are those data types that are defined by the user himself. In C++, these data types allow programmers to extend the basic data types provided and create new types that are more suited to their specific needs. C++ supports 5 user-defined data types:

    * Class
    * Structure
    * Union
    * Enumeration
    * Typedef

*/

#include <iostream>

using namespace std;


/*** ---CLASS--------- */
// A Class is the building block of C++’s Object-Oriented programming paradigm. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. 
class GreetMe {
    public:
        string name;

        GreetMe(string val) {
            name = val;
        }

        void display_greet() {
            cout << "Welcome " << name << endl;
        }
};

/** 2. Structure */
// A Structure is a user-defined data type like class. A structure creates a data type that can be used to group items of possibly different types into a single type.

struct Student {
    int age;
    char grade;
};      // struct also required `;`

/** 3. Union */
// Like structures , union is also user-defined data type used to group data of different type into a single type. But in union, all members share the same memory location.

union Employee {
    int salary;
    char position;
};


/** 4. Enumeration */
// Enumeration (or enum) is a user-defined data type in C++ mainly used to assign names to integral constants, the names make a program easy to read and maintain.

enum Week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};


/** 5. Typedef and Using */
// C++ allows you to define explicitly new data type names by using the keywords typedef or using. They do not create a new data class, rather, defines a name for an existing type. This can increase the portability (the ability of a program to be used across different types of machines; i.e., mini, mainframe, micro, etc; without many changes to the code) of a program as only the typedef statements would have to be changed.
typedef float decimal_no;

using int_no = int;

int main() {

    GreetMe greet("Ayush");
    greet.display_greet();

    GreetMe greet2("Abhinav");
    greet2.display_greet();


    // calling a struct
    Student student;
    student.age = 29;
    student.grade = 'A';

    cout << "student age is " << student.age << " and his grade is " << student.grade << endl;

    Employee employee;
    employee.salary = 20000;
    employee.position = 'S';

    cout << "employee position is " << employee.position << " and his salary is " << employee.salary << endl;

    // Enum
    enum Week week_day;
    week_day = Fri;
    
    cout << "Week day is: " << week_day << endl;

    decimal_no PI = 3.14f;
    int_no her_age = 26;
    cout << "decimal_no PI is: " << PI << "Type is: " << typeid(PI).name()  << endl;
    cout << "int_no her_age is: " << her_age << "Type is: " << typeid(her_age).name()  << endl;


    return 0;
}