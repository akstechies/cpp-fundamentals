// Lambda expressions in C++ provide a way to define anonymous functions inline. They are useful when you need a small function for a short duration, especially for callbacks, functional programming, or passing functions to algorithms like std::for_each, std::sort, etc.

/***

🔹 Syntax of a Lambda Expression
[capture_list](parameters) -> return_type {
    // Function body
};

✅ Components:

Capture List [capture_list] – Captures variables from the surrounding scope.
Parameter List (parameters) – Defines function parameters (optional).
Return Type -> return_type – Specifies the return type (optional, can be inferred).
Body {} – Contains the function logic.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;


int main() {
    // 🔹 1. Basic Example (Printing a Message)
    auto greet = []() -> void {
        cout << "Hey lambda" << endl;
    };
    greet();


    // 🔹 2. Lambda with Parameters
    auto sum = [](int a, int b) {
        return a + b;
    };
    cout << "Sum: " << sum(10, 5) << endl;


    // 🔹 3. Lambda with Capture List (Accessing Outer Variables)
    int num = 10;
    auto printNum = [num]() {  // Capturing `num` by value
        cout << "Captured num: " << num << endl;
    };

    printNum();


    // 🔹 4. Capturing by Reference
    // If you want the lambda to modify a variable from the surrounding scope, capture it by reference (&)
    auto modify = [&num]() {  // Capturing `num` by reference
        num += 5;
    };

    modify();
    cout << "Modified num: " << num << endl; // ✅ Changes reflect in `num`


    // 🔹 5. Using Lambda with STL Algorithms (std::for_each)
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    cout << "Doubled elements: ";

    for_each(nums.begin(), nums.end(), [](int x) {
        cout << x * 2 << ", ";
    });

    cout << endl;

    // 🔹 6. Mutable Lambda (Modifying Captured Variables)

    int num2 = 10;
    // By default, captured values cannot be modified inside the lambda. To modify them, use the mutable keyword.

    auto modify_num = [num2] () mutable -> void {
        num2 += 5;      // num2 is readonly so use mutable ~ but this will not change outer num2, for that you need pass by reference using &
        cout << "Inside lambda num2: " << num2 << endl;
    };

    modify_num();
    cout << "Outside lambda: " << num2 << endl; // ✅ `num` remains unchanged outside


    // 🔹 7. Returning Values Explicitly
    /*** 
    🔹 -> double explicitly declares the return type.
    🔹 C++ can infer return types, so you can omit -> double in this case.
    */
    auto multiply = [](double x, double y) -> double {
        return x * y;
    };

    cout << "Multiplication: " << multiply(4.5, 2.0) << endl;


    // 🔹 8. Storing a Lambda in std::function
    // Use std::function when you need a lambda as a function pointer.
    function<int(int, int)> add = [](int a, int b) -> int {
        return a + b;
    };

    cout << "Sum using std::function: " << add(4, 6) << endl;

    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size); // Default: Ascending order
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    // 🔹 Sorting an Array in Descending Order Using Lambda
    sort(arr, arr + size, [](int a, int b) {
        return a > b;
    });

    cout << "Sorted array (Descending): ";
    for (int num : arr) cout << num << " ";
    cout << endl;



    return 0;
}