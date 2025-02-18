/**
 
for_each (InputIterator start_iter, InputIterator last_iter, Function fnc)

start_iter : The beginning position 
from where function operations has to be executed.
last_iter : The ending position 
till where function has to be executed.
fnc/obj_fnc : The 3rd argument is a function or 
an object function which operation would be applied to each element. 

*/


#include <iostream>
#include<algorithm>

using namespace std;

void printIt(int x) {
    cout << x << "\n";
}


void doubleIt(int x) {
    cout << x*2 << endl;
}

int main() {

    // lest array will work but if more elements than size defined it will give errors ~ too many initializers for 'int [5]'
    int arr[5] = {1, 2, 3};

    // arr is a pointer to the first element of the array (&arr[0]).
    // arr + 5 moves the pointer 5 positions ahead, pointing one past the last element.
    cout << arr << "\n";
    cout << arr + 5 << "\n";
    // prints the address

    /**
     * 3 cases here
        - it will do what the function tells, here it is print
        - if the array size dont have that values it was printing zero
        - if the pointer was defined more than the arr size it was printing zero
     */
    for_each(arr, arr + 5, printIt);

    cout << "------------";
    int arr2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // in doubleIt func when I used `auto` as param then I was getting error bcoz C++ does not allow auto as a function parameter type in normal function definitions. 
    for_each(begin(arr2), end(arr2), doubleIt);



}