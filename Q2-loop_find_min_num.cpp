#include <iostream>

using namespace std;
int main()
{
    int user_num, min = 0, max = 100;

    cout << "\nEnter a negative number to come out of the loop: ";
    cin >> user_num;

    while (user_num >= min)
    {
        cout << "\nEnter a negative number to come out of the loop: ";
        cin >> user_num;
        if ((user_num < 0) || (user_num > 100))
        {
            break;
        }
    }
    if (user_num < min)
    {
        cout << "\nMinimum number typed in was: " << min;
    }
    else if (user_num > max)
    {
        cout << "\nMaximum number typed in was: " << max;
    }
    
    cout << endl;
    return 0;
}