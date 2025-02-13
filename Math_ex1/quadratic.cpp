// Write a program called quadratic.cpp that solves the quadratic equation for the x.
// The equation: x = (-b +- sqrt(b*b - 4 * a * c)) / (2 * a)
// #include <cmath> gives us access to the build-in sqrt() function to get a numbers square root.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare three double variables to hold a, b and c.
    double a, b, c;
    // Declare two variables to store the roots.
    double root1, root2;

    // Clear the console of previous outputs to make it nice and clean. Using ANSI Escape Codes.
    // \033[2J Clears the entire screen.
    // \033[H moves the cursor to row1 column1 (top left corner)
    cout << "\033[2J\033[H";

    // Output an introduction of what the program does.
    cout << "Solving a quadratic equation x = (-b +- sqrt(b*b - 4 * a * c)) / (2 * a)" << endl;

    // Ask for input for a, b and c.
    cout << endl << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // Do the math.
    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    // Output results.
    cout << endl << "Value x (+): " << root1;
    cout << endl << "Value x (-): " << root2;

    // Output goodbye message
    cout << endl << endl << "We are done here, goodbye!" << endl << endl;

    // Optional return 0;
    return 0;
}