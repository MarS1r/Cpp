// tells the compiler to include the iostream library, which is used for input and output operations (such as displaying text on the screen).
// <iostream> is a standard C++ library for handling input (cin) and output (cout).
#include <iostream>

// using namespace std; tells the compiler to use the std namespace. The std namespace is used for standard C++ classes, objects, and functions.
// Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.
// The std namespace includes the cout object, which is used to output text. If you don't use the std namespace, you would have to write std::cout instead of cout.
using namespace std;

// int main() is the main function where the program starts its execution. The int keyword indicates that the function returns an integer value.
int main()
{
    // cout is an object used to output text. The << operator is used to insert text into the cout object.
    // endl is an object used to insert a newline character. It is equivalent to writing '\n'.
    cout << "Hello, World!" << endl;
    // return 0 returns an integer value from the main function. The value 0 indicates that the program has successfully executed
    return 0;
}


// without using namespace std; int main would be written as:
// int main()
// {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }