#include <iostream>

using namespace std;

int main()
{
    // Dog's age
    int dog_age = 5;

    // three more variables
    int early_years;
    int later_years;
    int human_years;

    // The first two years of a dog’s life count as 21 human years.
    early_years = 21;

    // Each following year counts as 4 human years.
    later_years = (dog_age - 2) * 4;

    // Dog's age in human years
    human_years = early_years + later_years;

    // Print the dog's age in human years
    cout << "My name is Pontus! Ruff ruff, I am " << human_years << " years old in human years.";
    
    //return 0 is optional
    //return 0;
}