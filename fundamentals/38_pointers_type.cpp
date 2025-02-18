/*
In C programming pointers are used to manipulate memory addresses, to store the address of some variable or memory location. But certain situations and characteristics related to pointers become challenging in terms of memory safety and program behavior these include Dangling (when pointing to deallocated memory), Void (pointing to some data location that doesn’t have any specific type), Null (absence of a valid address), and Wild (uninitialized) pointers.
*/


#include <iostream>

using namespace std;

int main() {

    /*
    1. Dangling Pointer: A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. Such a situation can lead to unexpected behavior in the program and also serve as a source of bugs in C programs.
    */

    int* ptr = (int*)malloc(sizeof(int));
    cout  << ptr << endl;

    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    cout  << "ptr Freed" << endl;

    // removing Dangling Pointer
    ptr = NULL;

}