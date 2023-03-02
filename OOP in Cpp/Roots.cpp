/*
Name: Tri Huynh - W01420237
Date: Jan 23, 2023
Description: Calculate the condition of quadratic equation with 2 root input from user.
Duration: 20 mins
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Declare variables.
    double x1;
    double x2;
    double a, b, c;

    //Request user input.
    cout << "\nPlease enter the value of a: ";
    cin >> a;
    cout << "Please enter the value of b: ";
    cin >> b;
    cout << "Please enter the value of c: ";
    cin >> c;

    //Calculate by applying the quadratic fomula.
    x1 = (-b + sqrt(pow(b,2.0) - (4*a*c))) / (2*a);
    x2 = (-b - sqrt(pow(b,2.0) - (4*a*c))) / (2*a);

   cout << "The result of x1 is: " << x1 << endl;
   cout << "The result of x2 is: " << x2 << endl;

   cout << "\n";
    return 0;
}