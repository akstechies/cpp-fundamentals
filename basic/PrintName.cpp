#include <iostream> // 'std::cout' is defined in header '<iostream>'
// ------- iostream
// #include <bits/stdc++.h>
// -------- bits/stdc++.h

/* cstdio for print ostream for endl
 * #include <cstdio>
 * #include <ostream> //for endl - 'std::endl' is defined in header '<ostream>'
 * #include <iostream> // 'std::cout' is defined in header '<iostream>'
*/ 
// ----------
using namespace std;

int main() {

    //Using cout
    cout << "Ayush" << endl;

    // Puts
    puts("Ayush Puts");

    // Print F
    printf("Ayush PrintF\n");

    // wcout - wcout is used for printing the wide characters and wide strings object
    /**
        Wide char is similar to char data type, except that wide char take up twice 
        the space and can take on much larger values as a result. char can take 256 
        values which corresponds to entries in the ASCII table. On the other hand, 
        wide char can take on 65536 values which corresponds to UNICODE values 
    */
    wcout << L"Ayush Wcout" << endl;
}