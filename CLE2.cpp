#include <iostream>
#include <iomanip> // incuding the input output manipulation library
#include <cmath> //for mathematics and trigonometric functions
using namespace std;

/* I
 * Author: Kritika Singh
 * Created on May 12, 2022, 12:17 PM
 * Version: 1.0
 * Purpose: Input Output Manipulation and some Mathematical operations
 * Description: This lab has two parts:
 * 1- Read two decimal numbers from user separated by a space or tab and then print out the multiplication of these numbers 
 * to the nearest hundredth (3 numbers after the decimal point).
 * 2- Read a whole number from the user then print out a message that shows the value of this number to the power 5. 
*/
//

int main()
{

    // Declaring and initializing a non-decimal number
    int mywholenumber = 0;
    int result = 0;
    
    // Declaring and initializing a decimal number
    double myfirstdouble = 0.0;
    double myseconddouble = 0.0;
    double multiplication = 0.0;
    
    // Part 1 of the lab
    // Printing the statement to ask the user for two decimal numbers.
    cout << "Please enter two decimal values separated by a space: ";
    // Storing the user input
    cin >> myfirstdouble >> myseconddouble;
    multiplication = myfirstdouble * myseconddouble;
    // Printing the result
    cout << "The values you entered are " << myfirstdouble << " and " << myseconddouble << "." << endl;
    cout << "The result of multiplication is " << fixed << setprecision(3) << multiplication << "." << endl;

    // Part 2 of the lab
    // Printing the statement to ask the user for the whole numbers.
    cout << "Please enter a whole number: " ;
    // Storing the whole number as variable
    cin >> mywholenumber;
    // Using the power function to raise the user input number to the power of 5.
    result = pow(mywholenumber,5);
    // Printing the result and the number.
    cout << "The number you entered is " << mywholenumber << "." << endl;
    cout << "Result of power function is " << result << "." << endl;

    return 0;
    
}