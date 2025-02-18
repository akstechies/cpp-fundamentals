#include <iostream>

using namespace std;

int main() {
    cout << "Hello World Test" << endl;

    char sample[] = "Hello World";
    cout << sample << " - Is starting part of any coding language" << endl;    

    // CLOG
    clog << "An error is logged" << endl;

    // Error
    cerr << "An error occured" << endl;


    // INPUT
    int age;
    cout << "Enter age" << endl;
    cin >> age;
    cout << "Age is - " << age << endl;

    return 0;
}