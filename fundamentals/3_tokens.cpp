// In C++, tokens can be defined as the smallest building block of C++ programs that the compiler understands. It is the smallest unit of a program into which the compiler divides the code for further processing

#include <iostream>
// #include <string>

int main() {

    // 1. Identifiers
    // Entities like variables, functions, classes, or structs must be given unique names within the program so that they can be uniquely identified. The unique names given to these entities are known as identifiers.

    char my_name[] = "Ayush";
    std::cout << my_name;

    /** 2. Keywords */
    // Keywords in C++ are the tokens that are the reserved words in programming languages that have their specific meaning and functionalities within a program. Keywords cannot be used as an identifier to name any variables.
    // For example, a variable or function cannot be named as ‘int’ because it is reserved for declaring integer data type.
    // There are 95 keywords reserved in C++.

    /* int using = 10;
    std::cout << using;    // error as using is a keyword
    */

    /** 3. Contant */
    // Constants are the tokens in C++ that are used to define variables at the time of initialization and the assigned value cannot be changed after that.We can define the constants in C++ in two ways that are using the const, constexpr keyword and #define preprocessor directive.
    const int age = 29;
    constexpr char grade = 'A';
    int constexpr hoursIn_day = 24;
    #define TOTAL 100       // #define is also used to define a macro constant.

    std::cout << age << std::endl;
    std::cout << grade << std::endl;
    std::cout << hoursIn_day << std::endl;
    std::cout << TOTAL << std::endl;

    /** 4. Strings */
    // In C++, a string is not a built-in data type like ‘int’, ‘char’, or ‘float’. It is a class available in the STL library which provides the functionality to work with a sequence of characters, that represents a string of text.
    // #include <string> ~ Explicitly include <string> ~ without this import also code is working bcoz of iostream ~ but The <string> header provides the definition and functionality of std::string. While some headers like <iostream> may include <string> as part of their implementation, this is not guaranteed by the C++ standard.
    
    std::string var;
    std::string name = "Ayush Anand";
    std::cout << name << std::endl;

    /** 5. Punctuators */
    // Punctuators are the token characters having specific meanings within the syntax of the programming language. These symbols are used in a variety of functions, including ending the statements, defining control statements, separating items, and more.

    /**
    Below are the most common punctuators used in C++ programming:
        * Semicolon (;): It is used to terminate the statement.
        * Square brackets []: They are used to store array elements.
        * Curly Braces {}: They are used to define blocks of code.
        * Double-quote (“): It is used to enclose string literals.
        * Single-quote (‘): It is used to enclose character literals.
    */

    /** 6. Operators */
    // C++ operators are special symbols that are used to perform operations on operands such as variables, constants, or expressions.


}