// Syntax refers to the rules and regulations for writing statements in a programming language. They can also be viewed as the grammatical rules defining the structure of a programming language.

// Header file library
#include <iostream>

// Standard Namespace
using namespace std;

// Main function
int main() {

    // Body function

    // Declaration of variable
    int a = 10, b = 20;

    int result = a + b;

    // output
    cout << result;

    // Return statement
    return 0;

}

/** 1. Header File */
// The header files contain the definition of the functions and macros we are using in our program. In line #1, we used the #include  <iostream> statement to tell the compiler to include an iostream header file library which stores the definition of the cin and cout standard input/output streams that we have used for input and output. #include is a preprocessor directive using which we import header files.

/** 2. Namespace */
// A namespace in C++ is used to provide a scope or a region where we define identifiers. In line #2, we have used the using namespace std statement for specifying that we will be the standard namespace where all the standard library functions are defined.

/** 3. Main Function */
// In line #3, we defined the main function as int main(). The main function is the most important part of any C++ program. The program execution always starts from the main function. All the other functions are called from the main function. In C++, the main function is required to return some value indicating the execution status.

/** 4. Blocks */
// Blocks are the group of statements that are enclosed within { } braces. The body of the main function is from line #4 to line #9 enclosed within  { }.

/** 5. Semicolons */
// As you may have noticed by now, each statement in the above code is followed by a ( ; ) semicolon symbol. It is used to terminate each line of the statement of the program.

/** 6. Identifiers */
// We use identifiers for the naming of variables, functions, and other user-defined data types. An identifier may consist of uppercase and lowercase alphabetical characters, underscore, and digits. The first letter must be an underscore or an alphabet.

/** 7. Keywords */
// In the C++ programming language, there are some reserved words that are used for some special meaning in the C++ program. It can’t be used for identifiers. For example, the words `int`, `return`, and `using` are some keywords used in our program.

/** 8. Basic Output cout */
// In line #7, we have used the cout stream object (declared in the <iostream> header file) to print the sum of two numbers to the standard output stream (stdout).

/** How does the compiler process C++ Comments? */
// As a part of the compiler, the Lexical Analyzer scans the characters and transforms them into tokens with no passing of the commented text to the parser. Since Comments do not contribute to the functionality of the program they are simply omitted at the time of compilation. Accordingly, we can understand that comments are just text in programs that are ignored by the compiler.

/**

// Lexical Analysis is the first phase of a compiler that takes the input as a source code written in a high-level language. The purpose of lexical analysis is that it aims to read the input code and break it down into meaningful elements called tokens. Those tokens are turned into building blocks for other phases of compilation.

**  What is Lexical Analysis? **
// Lexical analysis is the process of breaking down the source code of the program into smaller parts, called tokens, such that a computer can easily understand. These tokens can be individual words or symbols in a sentence, such as keywords, variable names, numbers, and punctuation. It is also known as a scanner. Lexical Analysis can be implemented with the Deterministic Finite Automata. The output generated from Lexical Analysis are a sequence of tokens sent to the parser for syntax analysis.

// https://www.geeksforgeeks.org/introduction-of-lexical-analysis/

 */