#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    double pesos, reais, soles, euros;

    // Clear screen
    cout << "\033[2J\033[H";

    // Welcome text
    cout << "Welcome to the Currency calculator." << endl
         << endl;
    cout << "***********************************" << endl;
    cout << "This program calculates how much money you have when converting your Pesos, Reais, and Soles to Euros" << endl;
    cout << "***********************************" << endl
         << endl;

    // Input amounts
    cout << "Enter amount of Colombian Pesos: ";
    cin >> pesos;
    cout << "Enter amount of Brazilian Reais: ";
    cin >> reais;
    cout << "Enter amount of Peruvian Soles: ";
    cin >> soles;

    /*
    Conversion rates to Euros (13.02.25):
    Pesos: 0,047
    Reais: 0,16
    Soles: 0,26
    */

    // Do the math
    euros = pesos * 0.047 + reais * 0.16 + soles * 0.26;

    // Output results
    cout << "Euros =  " << euros << "€" << endl;

    return 0;
}