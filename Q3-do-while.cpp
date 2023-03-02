#include <iostream>

using namespace std;
int main()
{
    int userNum;
    int numCount = 0;

    cout << "\nEnter the number: ";
    cin >> userNum;

    do
    {
        cout << "Enter the number: ";
        cin >> userNum;

        if (userNum >= 50)
        {
            numCount += 1;
        }
        
    } while ((userNum != -1));

    cout << "You enter " << numCount << " numbers >= 50.";
    

    cout << endl;
    return 0;
}