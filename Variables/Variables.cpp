#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // declare a variable named number of type int
    int number;

    // assign the value 5 to the variable number
    number = 5;

    // declare and initialize at the same time
    int secondNumber = 10;
    int sum = 0;

    // add the two numbers together
    sum = number + secondNumber;

    // print the sum of the two numbers
    cout << "The sum of " << number << " and " << secondNumber << " is " << sum << endl;

    // ask for 2 numbers and print their multiplication
    // ask for the numbers inside a loop until the user enters a valid number
    while (true)
    {
        cout << "Enter an integer number: ";
        cin >> number;

        // if cin.fail() returns true, the input is invalid
        // cin.clear() clears the error flag on cin so that it can be used again
        // cin.ignore() discards the invalid input from the buffer
        // if cin.fail() returns false, the input is valid and the loop breaks
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer number." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Enter another integer number: ";
        cin >> secondNumber;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer number." << endl;
        }
        else
        {
            break;
        }
    }
    

    cout << "The product of " << number << " and " << secondNumber << " is " << number * secondNumber << endl;

    return 0;
}