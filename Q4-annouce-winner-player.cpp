#include <iostream>

using namespace std;

int main()
{
    int playerA, playerB, pointA = 0, pointB = 0;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Set " << i << endl;
        cout << "Enter player A score: ";
        cin >> playerA;
        cout << "Enter player B score: ";
        cin >> playerB;

        if (playerA > playerB)
        {
            pointA += 1;
        }
        else if (playerB > playerA)
        {
            pointB += 1;
        }
        else
        {
            pointA += 1;
            pointB += 1;
        }
    }
    if (pointA > pointB)
    {
        cout << "Player A is the winner!";
    }
    else if (pointB > pointA)
    {
        cout << "Player B is the winner!";
    }
    else
    {
        cout << "TIE*************";
    }
    cout << endl;
    return 0;
}