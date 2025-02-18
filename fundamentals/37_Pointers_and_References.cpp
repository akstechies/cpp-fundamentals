/**
In C++ pointers and references both are mechanisms used to deal with memory, memory address, and data in a program. Pointers are used to store the memory address of another variable whereas references are used to create an alias for an already existing variable.

Pointers in C++ are a symbolic representation of addresses. They enable programs to simulate call-by-reference and create and manipulate dynamic data structures. Pointers store the address of variables or a memory location. 

datatype *var_name; 


*/

#include <iostream>

using namespace std;


// pass by value
int square(int x) {
    return x * x;
}

// pass by reference
void square_ref(int& x) {
    x *= x;
}

// pointer ref
void square_pointer(int* x) {
    *x *= *x; 
}


// void pointer function
void increaseNum(void* data, int ptrsize) {
    if (ptrsize == sizeof(char)) {
        char *ptrchar;
        ptrchar = (char*)data;
        // Increase the char stored at *ptrchar by 1
        (*ptrchar)++;
    } else if (ptrsize == sizeof(int)) {
        int* ptrint;
        // Typecast data to a int pointer
        ptrint = (int*)data;
        // Increase the int stored at *ptrchar by 1
        (*ptrint)++;
    }
    
}


int main() {

    int x = 10;
    int *x_ptr;

    // here it stores the address
    x_ptr = &x;

    cout << x_ptr << endl;

    *x_ptr = 40;
    cout << x << endl;
    cout << *x_ptr << endl;




    /* 
    References in C++
    When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. There are 3 ways to pass C++ arguments to a function: 

    call-by-value
    call-by-reference with a pointer argument
    call-by-reference with a reference argument
    */


    int& y = x;

    // now here y is referenced with x so if we change anything in y it will be changed in x also
    cout << "y is: " << y << "\n";
    y = 10;
    cout << "x changed by y is: " << x << "\n";


    // differences between Pointer and references. Both references and pointers can be used to change the local variables of one function inside another function. Both of them can also be used to save copying of big objects when passed as arguments to functions or returned from functions, to get efficiency gain. 


    /* 
    Note A pointer can be declared as void but a reference can never be void.For example:
    */
    int a = 10;

    void *ptr_a = &a;
    // void &ref_a = a;        // reference to void is not allowedC/C++(250)

    /*
    - References are less powerful than pointers
    - Once a reference is created, it cannot be later made to reference another object; it cannot be reseated. This is often done with pointers.
    - References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing.
    - A reference must be initialized when declared. There is no such restriction with pointers
    - we can pass parameters to a function either by pointers or by reference.
    */

    // the pointer and value datatype must be same
    int var = 10;
    int *ptr = &var;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;

    cout << "var is: " << var << "\n";

    *ptr = 73;
    cout << "changed var is: " << var << "\n";

    **ptr2 = 44;
    cout << "changed2 var is: " << var << "\n";

    ***ptr3 = 88;
    cout << "changed3 var is: " << var << "\n";


    int var_x = 20;
    var_x = square(var_x);
    cout << "Square var_x: " << var_x << "\n";

    square_ref(var_x);
    cout << "Square var_x: " << var_x << "\n";
    
    var_x = 23;
    square_pointer(&var_x);
    cout << "Square var_x: " << var_x << "\n";
    // In C++, by default arguments are passed by value and the changes made in the called function will not reflect in the passed variable. The changes are made into a clone made by the called function. If wish to modify the original copy directly (especially in passing huge object or array) and/or avoid the overhead of cloning, we use pass-by-reference. Pass-by-Reference with Reference Arguments does not require any clumsy syntax for referencing and dereferencing.


    /*
    * Array Name as Pointers
        - An array name contains the address of the first element of the array which acts like a constant pointer. It means, the address stored in the array name can’t be changed. For example, if we have an array named val then val and &val[0] can be used interchangeably. 
    */

    int val[] = {5, 10, 20, 25, 30};

    int* ptr_val = val;

    cout  <<  "Val is: " << val[1] << "\n" << "Ptr val is: " << ptr_val[1] << "\n";

    // we can perform arithmetic operations on pointers
    // In general, nums[ i ][ j ] is equivalent to *(*(nums+i)+j) 

    cout << "Access value by pointer: " << (ptr_val + 3)[0] << ", " << "By index: " << val[3] << "\n";

 
    /* String is an array of characters so lets us say "AYUSH" is a string and assume it is stored at the memory locations that start at address 1800, we can represent the previous declaration as
    
    A = 1800, Y = 1801, U = 1802, S = 1803, H = 1804
    */

    /*
    * Void Pointers
        - This is a special type of pointer available in C++ which represents the absence of type. Void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties). This means that void pointers have great flexibility as they can point to any data type. There is a payoff for this flexibility. These pointers cannot be directly dereferenced. They have to be first transformed into some other pointer type that points to a concrete data type before being dereferenced. 
    */

    char c = 'x';
    increaseNum(&c, sizeof(c));

    cout << "New c val is: " << c << "\n";

    int z = 10;
    increaseNum(&z, sizeof(z));
    cout << "New z val is: " << z << "\n";

    /*
    NULL Pointers
        A null pointer is a pointer that point nowhere and not just an invalid address. Following are 2 methods to assign a pointer as NULL;
    */
    int *ptr_1 = 0;
    int *ptr_2 = NULL;


    /* Opaque Pointer in C++
        - Opaque as the name suggests is something we can’t see through. e.g. wood is opaque. An opaque pointer is a pointer that points to a data structure whose contents are not exposed at the time of its definition. 
        - The following pointer is opaque. One can’t know the data contained in STest structure by looking at the definition.
            -- struct STest* pSTest;
        - It is safe to assign NULL to an opaque pointer.
            -- pSTest = NULL; 
    */


    /*
    * Near, Far and Huge Pointers in C
        - In older times, the intel processors had 16-bit registers, but the address bus was 20-bits wide. Due to this, CPU registers were not able to hold the entire address at once. As a solution, the memory was divided into segments of 64 kB size, and the near pointers, far pointers, and huge pointers were used in C to store these addresses.

        - Although they are not commonly used in 32-bit or 64-bit architecture. In this article, we will learn about the near, far and huge pointers so that we can understand them when working with legacy code or embedded systems.
    
    */


    // what pointer addition means
    /*
    let us take out previous example

    A = 1800, Y = 1801, U = 1802, S = 1803, H = 1804

    assuming it is stored in arr;
    so `arr` will give `A` address
    and `arr + 3` will give `S` address

    // example calculation ~ behind the scenes
    arr + n = arr address (A) + (n * 4(size of an integer))
    arr + 3 = 1800 + (3 * 4(size of an integer)) = 1020


    same goes for minus
    */


    /*
    4. Subtraction of Two Pointers of the Same Datatype
        The Subtraction of two pointers can be done only when both pointers are of the same data type. The subtraction of two pointers gives the number of elements present between the two memory addresses so it is primarily valid if the two pointers belong to the same array.

        For Example, in an array arr[10], ptr1 point points to the element at index 2 and ptr2 points to the element at index 4, then the difference between two pointers will give you the number of elements between them.
    */
    int my_arr[5] = {1, 2, 3, 4, 5};

    int* my_arr_ptr1 = &my_arr[1];
    int* my_arr_ptr2 = &my_arr[4];

    cout << my_arr_ptr2 - my_arr_ptr1 << endl;

    // We can compare the pointer of a type to NULL. This operation helps us to find whether the given pointer points to some memory address or not. It helps us to control errors such as segmentation faults.

    int *null_ptr = NULL;
    cout << null_ptr << endl;

    // when doing only `int *null_ptr` it will returns some address because it holds a garbage value;
    int *null_ptr_2;
    cout << null_ptr_2 << endl;


}