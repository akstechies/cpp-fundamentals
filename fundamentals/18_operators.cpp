// an operator is a symbol that operates on a value to perform specific mathematical or logical computations on given values. They are the foundation of any programming language.

// https://www.geeksforgeeks.org/operators-in-cpp/


#include <iostream>

using namespace std;

void arithmetic_operators() {

    // Arithmetic operators are used to perform arithmetic or mathematical operations on the operands. For example, ‘+’ is used for addition.

    int a = 8, b = 3;

    // Addition
    cout << "a + b = " << (a + b) << endl;
  
    // Subtraction
    cout << "a - b = " << (a - b) << endl;
  
    // Multiplication
    cout << "a * b = " << (a * b) << endl;
  
    // Division
    cout << "a / b = " << (a / b) << endl;
  
    // Modulo
    cout << "a % b = " << (a % b) << endl;
  
    // Increament
    cout << "++a = " << ++a << endl;
  
    // Decrement
    cout << "--b = " << --b;

    /** You may have noticed that some operator works on two operands while other work on one. On the basis of this operators are also classified as:

    * Unary: Works on single operand.
    * Binary: Works on two operands.
    * Ternary: Works on three operands. */

}

void relational_operators() {

    // Relational operators are used for the comparison of the values of two operands. For example, ‘>’ check right operand is greater.

    // Note: In output 0 denotes false and 1 denotes true

    int a = 6, b = 4;

    // Equal operator
    cout << "a == b is " << (a == b) << endl;
  
    // Greater than operator
    cout << "a > b is " << (a > b) << endl;
  
    // Greater than Equal to operator
    cout << "a >= b is " << (a >= b) << endl;
  
    //  Lesser than operator
    cout << "a < b is " << (a < b) << endl;
  
    // Lesser than Equal to operator
    cout << "a <= b is " << (a <= b) << endl;
  
    // Not equal to operator
    cout << "a != b is " << (a != b);
}

void logical_operator() {

    // Logical operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. The result returns a Boolean value, i.e., true or false.

    int a = 6, b = 4;

    // Logical AND operator
    cout << "a && b is " << (a && b) << endl;
    // Returns true only if all the operands are true or non-zero.
  
    // Logical OR operator
    cout << "a || b is " << (a || b) << endl;
    // Returns true if either of the operands is true or non-zero.
  
    // Logical NOT operator
    cout << "!b is " << (!b);
    // Returns true if the operand is false or zero.
}

void bitwise_operator() {

    // Bitwise operators are works on bit-level. So, compiler first converted to bit-level and then the calculation is performed on the operands.
    int a = 6, b = 4;

    // Binary AND operator
    cout << "a & b is " << (a & b) << endl;

    // Binary OR operator
    cout << "a | b is " << (a | b) << endl;

    // Binary XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;

    // Left Shift operator
    cout << "a<<1 is " << (a << 1) << endl;

    // Right Shift operator
    cout << "a>>1 is " << (a >> 1) << endl;

    // One’s Complement operator
    cout << "~(a) is " << ~(a);

}

void assignment_operators() {

    // Assignment operators are used to assign value to a variable. We assign the value of right operand into left operand according to which assignment operator we use.  

    int a = 6, b = 4;

    // Assignment Operator.
    cout << "a = " << a << endl;
  
    //  Add and Assignment Operator.
    cout << "a += b is " << (a += b) << endl;
  
    // Subtract and Assignment Operator.
    cout << "a -= b is " << (a -= b) << endl;
  
    //  Multiply and Assignment Operator.
    cout << "a *= b is " << (a *= b) << endl;
  
    //  Divide and Assignment Operator.
    cout << "a /= b is " << (a /= b);

}

void ternary_operator() {

    int a = 1000, b = 44;

    int max = (a > b) ? a : b;

    int c = 400;

    if (a > b) {
        if (a > c) {
            cout << "a" << a << endl;
        } else {
            cout << "c" << c << endl; 
        }
    } else {
        if (b > c) {
            cout << "b" << b << endl;
        } else {
            cout << "c" << c << endl; 
        }
    }

    int max3 = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    char charMax = (a > b) ? ((a > c) ? 'a' : 'c') : ((b > c) ? 'b' : 'c');
    printf("%c is greater holding value of %d", charMax, max3);

}




int main() {

    int sum = 10 + 20;

    cout << sum << endl;


    /** 1. Arithmetic Operators */
    // Arithmetic operators are used to perform arithmetic or mathematical operations on the operands. For example, ‘+’ is used for addition.

    int a = 50, b = 408;

    cout << "sum: " << a + b << endl; 
    cout << "minus: " << a - b << endl; 
    cout << "mod: " << a % b << endl; 

    cout << "++a: " << ++a << endl; 
    cout << "a++: " << a++ << endl; 
    cout << "a++: " << a << endl; 
    // ++a and a++, both are increment operators, however, both are slightly different. In ++a, the value of the variable is incremented first and then It is used in the program. In a++, the value of the variable is assigned first and then It is incremented. Similarly happens for the decrement operator.


    /** 2. Relational Operators */
    // Relational operators are used for the comparison of the values of two operands. For example, ‘>’ check right operand is greater.

    cout << "a == b: " << (a == b) << endl;

    cout << "a != b: " << (a != b) << endl; 

    cout << "a > b: " << (a > b) << endl; 


    /** 3. Logical Operators */
    // Logical operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. The result returns a Boolean value, i.e., true or false.

    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "!a: " << (!a) << endl;

    /** 4. Ternary */
    // Ternary or conditional operator returns the value, based on the condition. 
    // Expression1 ? Expression2 : Expression3

    int var1 = ( a > b ) ? a : b;
    cout << "Greater is: " << var1 << endl;

    int x = -++a;

    // Unary Minus (-) Operator
    // The symbol (-) represents the unary minus operator in C++, which changes the sign of its operand to negative. If the operand is negative, this operator will make it positive and vice versa.
    int y = -b;

    // Unary Plus Operator (+)
    // The symbol (+) represents the unary plus operator, which explicitly specifies the positive value of its operand. It doesn't change the sign of a if it's already positive, but it can be used for clarity in expressions.
    int z = +y;

    cout << "-++a: " << -++a << endl;
    cout << "-b: " << y << endl;
    cout << "+y: " << z << endl;

    ternary_operator();

    return 0;
}

