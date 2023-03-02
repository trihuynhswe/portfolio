/*
Feb 16, 2023
Mini Project: Array Problem
----
Apply the vector to store a random 5 integer numbers from keyboard.
Using For Loop to calculate the sum of min and max, 
followed by calculate sum of 4 int from 5 integers, and then select the min sum and max sum.
-----
Duration: 15 mins.
*/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    const int NUMS_VAL = 5;

    //Create a vector.
    vector<int>userInput(NUMS_VAL);

    //Populate the random 5 integers from user input.
    cout << "\nEnter 5 integers: ";
    //Create a loop for request an input.
    for (int i = 0; i < userInput.size(); i++)
    {
        cin >> userInput.at(i);
    }
    int sum = 0;
    int min = userInput.at(0);
    int max = userInput.at(0);

    //Using for loop to arrange the calculate.
    for (int i = 0; i < userInput.size(); i++)
    {
        sum += userInput.at(i);
        if (min > userInput.at(i))
        {
            min = userInput.at(i);
        }
        if (max < userInput.at(i))
        {
            max = userInput.at(i);
        }
    }
    cout << "\nThe minimum sum is: " << sum - max << endl;
    cout << "\nThe maximum sum is: " << sum - min << endl;
    cout << endl;
    return 0;
}