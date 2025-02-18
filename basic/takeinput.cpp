// https://www.geeksforgeeks.org/input-in-cpp/

#include <iostream>

using namespace std;

int main() {
    //  In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input. 

    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Name is: " << name << endl;

    // Taking multiple input
    int age, year;
    cout << "Please enter age and year: ";
    cin >> age  >> year;
    cout << "Age is: " << age << " and year is: " << year;


}