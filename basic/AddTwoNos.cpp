#include <iostream>

using namespace std;

int main() {

    int a = 15, b = 30;

    cout << a + b << endl; //Time complexity O(1)


    // using loops to understand
    // loop until next number and increment first by one

    for (int i = 0; i < b; i++) {
        a++;
    }
    cout << a << endl; 
    
    
    //  for negative ~ 0 > -n
    int c = -10;
    for (int k = 0; k > c; k--) {
        a--;
    }
    cout << a << endl; 
}