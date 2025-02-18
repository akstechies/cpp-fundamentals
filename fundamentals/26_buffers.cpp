/* In C++, a buffer is a memory space for temporarily storing data before processing, writing to a file, or sending it over a network. 

Buffers serve as intermediaries, facilitating seamless data transfer within your program and between external devices.
*/

#include <iostream>

int main() {
    // We can create a buffer in C++ simply by allocating memory:

    // char *buffer = new char buffer_name[buffer_size]
    /* *buffer - pointer that points to the address of the buffer
        buffer_name - name of the buffer
        buffer_size - size of the buffer */
    
    const int buffer_size = 1024;
    char *buffer = new char[buffer_size];
    
    std::cout << "ENter a line of text: ";
    
    // read data into the buffer
    std::cin.getline(buffer, buffer_size);

    std::cout << "You enetered: " << buffer << std::endl;

    // deallocate the dynamically allocated memory
    delete[] buffer;

    return 0;

}