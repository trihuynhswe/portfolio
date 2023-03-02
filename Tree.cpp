/*
Feb 25, 2023
Programming Project 3: Draw a pine line
------
Using 3 for-loops to draw a CONE. (2 nested for-loops inner the outer for-loop)
Using 1 for-loop to draw a BASE. (length of base will be double amount of the height)
Using 2 for-loops to draw a TRUNK. (divide height by 2 for getting the amount of trunk)
------
Duration: 40 mins.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declare variables
    int height;

    //Required user input the height of the tree.
    cout << "\nHow tall should the tree be?: ";
    cin >> height;
    cout << endl;

    //Clarify the minimum condition for the tree height.
    if ((height < 3) || (height > 15))
    {
        cout << "\nThe height should be in the range of 3-15." << endl;
        return 1;
    }

    //Draw cone
    for (int i = 1; i <= height; i++)
    {
        int numSpaces = height - i;
        int level = 2 * i - 1;

        for (int i = 0; i < numSpaces; i++)
        {
            cout << " ";
        }
        cout << "/";

        for (int i = 0; i < level - 1; i++) //level -1 to get NO SPACE BETWEEN "/\"
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }

    // Draw base of the tree
    int numDashes = 2 * height;
    for (int i = 0; i < numDashes; i++)
    {
        cout << "-";
    }
    cout << endl;
    
    // Draw trunk of tree
    int trunkHeight = height / 2;
    for (int i = 0; i < trunkHeight; i++)
    {
        int numSpaces = height - 1;
        for (int i = 0; i < numSpaces; i++)
        {
            cout << " ";
        }
        cout << "||" << endl;
    }
    cout << endl;
    return 0;
}