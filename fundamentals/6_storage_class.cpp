// C++ Storage Classes are used to describe the characteristics of a variable/function. It determines the lifetime, visibility, default value, and storage location which helps us to trace the existence of a particular variable during the runtime of a program. Storage class specifiers are used to specify the storage class for a variable.

/** "C++ provides 6 different storage classes, which are as follows:

    1. auto Storage Class
    2. extern Storage Class
    3. static Storage Class
    4. register Storage Class
    5. mutable Storage Class
    6. thread_local Storage Class";

*/

#include <iostream>
// #include "variables.cpp"
#include <mutex>
#include <thread>
    

using namespace std;


thread_local int val = 10;

// mutex for synchronization
mutex mtx;

int static_func_1() {
    static int var1 = 10;

    int static count = 0;
    count++;
    return count;
}

class MutableA {
    public:
        int x;

        mutable int y;
        int mutable z;

        MutableA(): x(4), y(5), z(6) {}
};      // expected ';' after class definition

int main() {

    /** 1. auto Storage Class */
    // The auto storage class is the default class of all the variables declared inside a block. The auto stands for automatic and all the local variables that are declared in a block automatically belong to this class.

    /**
        * Scope: Local
        * Default Value: Garbage Value
        * Memory Location: RAM
        * Lifetime: Till the end of its scope
    */

    // Declaring an auto variable
    int a = 32;
    float b = 3.2;
    string c = "GeeksforGeeks";

    // Printing the auto variables
    cout << a << " \n";
    cout << b << " \n";
    cout << c << " \n";

    /** ========----------------------------------- 
    ========--------------------------------------- */

    /** 2. extern Storage Class */
    // https://www.geeksforgeeks.org/internal-linkage-external-linkage-c/
    // The extern storage class simply tells us that the variable is defined elsewhere and not within the same scope (or even source file) where it is used (i.e. external linkage). Basically, the variable is created in a different scope or file and can be used in a different file as well.
    // A normal global variable can be made extern as well by placing the extern keyword before its declaration/definition in any function/block. The main purpose of using extern variables is that they can be accessed between two different files which are part of a large program.
    /**
        * Scope: Global
        * Default Value: Zero
        * Memory Location: RAM
        * Lifetime: Till the end of the program.
    */

    extern int extern_var;
    // cout << "Extern: " << extern_var;    // when I Included the file in header it will be working

    /** ========----------------------------------- 
    ========--------------------------------------- */

    /** 3. static Storage Class */
    // The static storage class is used to declare static variables that have the property of preserving their value even after they are out of their scope. They are initialized only once and exist until the termination of the program. Thus, no new memory is allocated because they are not re-declared. Global static variables can be accessed anywhere in the program but unlike extern variable, they have internal linkage so they cannot be accessed outside the program.
    /**
        * Scope: Global
        * Default Value: Zero
        * Memory Location: RAM
        * Lifetime: Till the end of the program.
    */
    // cout << "Static Var 1: " << static_func_1::var1() << endl; ~ Error bcoz static_func_1 is a func not a class
    cout << "Static Count: " << static_func_1() << endl;
    cout << "Static Count 2: " << static_func_1() << endl;
    // here you will notice that if we dont use static varible then the value is not getting printed with increment,  using static we are preserving the values even when they are out of the scope

    /** ========----------------------------------- 
    ========--------------------------------------- */

    /** 4. register Storage Class */
    // The register storage class declares register variables using the register keyword which has the same functionality as that of the auto variables. The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free register is available. This makes the use of register variables to be much faster than that of the variables stored in the memory during the runtime of the program. If a free register is not available, these are then stored in the RAM.
    // An important and interesting point to be noted here is that we cannot obtain the address of a register variable using pointers.
    /**
        * Scope: Local
        * Default Value: Garbage Value
        * Memory Location: Register in CPU or RAM
        * Lifetime: Till the end of its scope
    */
    // Note: The register keyword is deprecated in C++17 onwards.
    // register char reg_a = 'A';
    // cout << "register a: " << reg_a << endl;

    /** ========----------------------------------- 
    ========--------------------------------------- */

    /** 5. mutable Storage Class */
    // Sometimes there is a requirement to modify one or more data members of class/struct through the const function even though you don’t want the function to update other members of class/struct. This task can be easily performed by using the mutable keyword. The keyword mutable is mainly used to allow a particular data member of a const object to be modified. 

    // When we declare a function as const, this pointer passed to the function becomes const. Adding a mutable to a variable allows a const pointer to change members.
    // The mutable specifier does not affect the linkage or lifetime of the object. It will be the same as the normal object declared in that place.

    const MutableA mutA;    // since we are using const, so changing variables inside this class that are not multable defined will raise and error ~ readonly error

    cout << "mutA x: " << mutA.x << endl;
    cout << "mutA y: " << mutA.y << endl;
    cout << "mutA z: " << mutA.z << endl;

    // mutA.x = 123; // error: assignment of member 'MutableA::x' in read-only object bcoz we have used the class using `const`
    mutA.y = 55;
    mutA.z = 77;
    // cout << "mutA x2: " << mutA.x << endl;
    cout << "mutA y2: " << mutA.y << endl;
    cout << "mutA z2: " << mutA.z << endl;


    /** ========----------------------------------- 
    ========--------------------------------------- */


    /** 6. thread_local Storage Class */
    // The thread_local Storage Class is the new storage class that was added in C++11. We can use the thread_local storage class specifier to define the object as thread_local. The thread_local variable can be combined with other storage specifiers like static or extern and the properties of the thread_local object changes accordingly.

    /*
    Properties of thread_local Storage Class
    * Memory Location: RAM
    * Lifetime: Till the end of its thread
    */

    // included headers
    /**
        #include <mutex>
        #include <thread>
        thread_local int val = 10;

        // mutex for synchronization
        mutex mtx;
    */

    thread th1([]() {
        val += 18;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 1 value: " << val << '\n';
    });

    thread th2([]() {
        val += 33;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 2 value: " << val << '\n';
    });

    thread th3([]() {
        val += 74;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 3 value: " << val << endl;
    });

    // wait for all threads to finish ~ if we don't use this the program will get executed without printing this threads as it run in background
    th1.join();
    th2.join();
    th3.join();


    // what we see is the main global val value is not changed here and inside the thread the val is affected only for that particular thread not all
    cout << "Main thread value: " << val << endl;
    // if we dont use thread local then the value will be changed as per all



    
    return 0;
}



