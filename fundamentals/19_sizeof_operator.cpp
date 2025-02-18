#include <iostream>

using namespace std;

int main() {

    int x = 555555;

    cout << sizeof(x) << endl;
    cout << sizeof(int) << endl;

    // size of array

    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "length of arr is: " << n << endl;
    cout << "size of arr is: " << sizeof(arr) << endl;

}