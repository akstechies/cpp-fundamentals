/**C++ Overloading (Function)
If we create two or more members having the same name but different in number or type of parameters, it is known as C++ overloading. In C++, we can overload:

methods,
constructors and
indexed properties


Types of overloading in C++ are:
- Function overloading
- Operator overloading

Function Overloading is defined as the process of having two or more functions with the same name, but different parameters. In function overloading, the function is redefined by using either different types or number of arguments. It is only through these differences a compiler can differentiate between the functions.
*/

#include <iostream>


using namespace std;


int add(int x, int y) {
    return x + y;
}

int add(int a, int b, int c) {
    return  a + b + c;
}

int mul(int, int);
float mul(double, int);
void fun(int);
void fun(float);


void defaultArgs(int a, int b = 5) {
    cout << "defaultArgs sum is: " << a + b <<  endl;
}


int main() {

    cout << "Added two nos: " << add(10, 5) << endl;
    cout << "Added 3 nos.: " << add(7, 9, 11) << endl;

    // Example: when the type of the arguments vary.
    int r1 = mul(6, 7);
    float r2 = mul(0.2, 3);
    cout << "r1 is : " << r1 << endl;
    cout << "r2 is : " << r2 << endl;


    // When the compiler is unable to decide which function is to be invoked among the overloaded function, this situation is known as function overloading ambiguity.

    fun(12);
    // fun(1.2); ~ errors so convert and use
    fun(1.2f);



    // The above example shows an error “call of overloaded ‘fun(double)’ is ambiguous“. The fun(10) will call the first function. The fun(1.2) calls the second function according to our prediction. But, this does not refer to any function as in C++, all the floating point constants are treated as double not as a float. If we replace float to double, the program works. Therefore, this is a type conversion from float to double.


    defaultArgs(55);
    defaultArgs(7, 2);


    return 0;

}

int mul(int a, int b) { return a * b; }
float mul(double x, int y) { return x * y; }


void fun(int i) { cout << "Value of i is : " << i << endl; }
void fun(float j)
{
    cout << "Value of j is : " << j << endl;
}









