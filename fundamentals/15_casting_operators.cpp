// The casting operators is the modern C++ solution for converting one type of data safely to another type. This process is called typecasting where the type of the data is changed to another type either implicitly (by the compiler) or explicitly (by the programmer).

/** 

    Types of cast
    * static_cast
    * dynamic_cast
    * const_cast
    * reinterpret_cast

*/

#include <bits/stdc++.h>

using namespace std;

// for dynamic cast -----

class Animal {
    public:
        // A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method. 
        virtual void speak() {
            cout << "Animal speaks." << endl;
        }
};

class Dog: public Animal {
    public: 
        void speak() override {
            cout << "Dog barks." << endl;
        }
};

class Cat: public Animal {
    public: 
        void speak() override {
            cout << "Cat meows." << endl;
        }
};
// ------

int main() {

    /** 1. Static cast*/
    // syntax ~ static_cast <new_type> (exp);
    /* exp: Data to be converted.
    new_type: Desired type of expression */
    // The static_cast operator is the most commonly used casting operator in C++. It performs compile-time type conversion and is mainly used for explicit conversions that are considered safe by the compiler. 

    // let us convert a character to integer to its ASCII value using casting operator
    
    char ch = 'c';
    int i = static_cast<int>(ch);
    cout << i << endl;

    // --
    int var = 1002;
    double cast_var = static_cast <double> (var);

    printf("var is %d and cast_var is %d \n", var, cast_var);

    cout << "Var type is: " << typeid(var).name() << endl << "- and cast_var type is: " << typeid(cast_var).name() << endl;
    // Explanation: In this example, we have used typeid() operator to check the data type. We have defined an integer variable `var` and converted it into a double `cast_var` using `static_cast`. After that, we print the data types of variables and pass `static_cast<double>(var)` in `typeid()` to check its data type. we can see the output “i, d” is printed where i denotes integer and d denotes double.

    /******** ========-------------------------- */

    /** 2. dynamic cast */
    // The dynamic_cast operator is mainly used to perform downcasting (converting a pointer/reference of a base class to a derived class) in polymorphisms and inheritance. It ensures type safety by performing a runtime check to verify the validity of the conversion.
    // syntax ~ dynamic_cast <new_type> (exp);
    // NOTE: If the conversion is not possible, dynamic_cast returns a null pointer (for pointer conversions) or throws a bad_cast exception (for reference conversions).

    // Base class pointer to derived class object 
    Animal* animalPtr = new Dog();

    // Downcasting
    Dog* dogPtr = dynamic_cast <Dog*> (animalPtr);

    // check type cast
    cout << dogPtr << endl;     // ~ it gives address

    if (dogPtr) {
        cout << "dogPtr success" << endl;
    } else {
        cout << "dogPtr fails" << endl;
    }

    Cat* catPtr = dynamic_cast <Cat*> (animalPtr);

    cout << catPtr << endl;     // ~ it gives 0

    if (catPtr) {
        cout << "catPtr success" << endl;
    } else {
        cout << "catPtr fails" << endl;
    }

    // Cat conversion fails bcoz animalPtr points to dog object
    // Explanation: The first line of output is printed because the animalPtr of the Animal type is successfully cast to the Dog type and speak() function of the Dog class is invoked but the casting of the Animal type to ‘Cat’ type is failed because animalPtr points to a Dog object thus, the dynamic cast fails because the typecasting is not safe.

    /******** ========-------------------------- */

    /** 3. const_cast */

    // The const_cast operator is used to modify the const or volatile qualifier of a variable. It allows programmers to temporarily remove the constancy of an object and make modifications. Caution must be exercised when using const_cast, as modifying a const object can lead to undefined behavior.
    // const_cast <new_type> (exp);

    const int var2 = 15;

    const int* var2Ptr = &var2;
    cout << "var2Ptr: "<< *var2Ptr << endl;

    int* nonConstVar2Ptr = const_cast <int*> (var2Ptr);
    *nonConstVar2Ptr = 10;

    cout << "nonConstVar2Ptr: "<< *nonConstVar2Ptr << endl;
    cout << "var2: " << var2 << endl;
    cout << "var2Ptr changed: "<< *var2Ptr << endl;

    /** 
    int* ptr = &var2;
    *ptr = 733;
    cout << var2;

    // ~ error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
    */

    // we have modified the value of the const type pointer by changing its qualifier from const to non-const and then printing the modified value.
    // we will se that var2Ptr which was defined as const, it's value is changed


    /******** ========-------------------------- */

    /** 4. reinterpret_cast */
    // The reinterpret_cast operator is used to convert the pointer to any other type of pointer. It does not perform any check whether the pointer converted is of the same type or not.
    // Syntax ~ reinterpret_cast <new_type> (exp);
    
    int var3 = 114;

    int* var3Ptr = &var3;

    char* charPtr = reinterpret_cast <char*> (var3Ptr);

    cout << "Integer Address: " << var3Ptr << endl;
    cout << "Char ptr: " << charPtr << endl;

    cout << "Char Address: " << static_cast<void*>(charPtr) << endl;
    cout << "Char Address by reinterpret_cast: " << reinterpret_cast<void*>(charPtr) << endl;
    // or use reinterpret_cast<void*>

    return 0;
}