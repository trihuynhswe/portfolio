/*
Name: Tri Huynh - W01420237
Date: Jan 23, 2023
Description: Calculate the volume and surface area of a right cone with input values from user.
Duration: 20 mins
*/

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;
int main()
{
    //Declare variables.
    double volume, surfaceArea, radius, height;

    //Take the value from user input.
    cout << "\nPlease enter the value of radius: ";
    cin >> radius;
    cout << "Please enter the value of height: ";
    cin >> height;

    //Using volume and surface of a right cone fomula to calculate.
    volume = 1.0/3 * M_PI * pow(radius, 2.0) * height;
    surfaceArea = ((M_PI * radius) * sqrt(pow(radius, 2.0) + pow(height, 2.0))) + (M_PI * pow(radius, 2.0));

    //Display the result.
    cout << "\nWith the radius = " << radius << " and height = " << height << endl;
    cout << "\nThe volume of a right cone is "<< volume << endl;
    cout << "The surface area of a right cone is "<< surfaceArea << endl;

    cout << "\n";
    return 0;
}