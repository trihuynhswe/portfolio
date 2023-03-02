/*
*/

#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main()
{
	default_random_engine rng((unsigned)(chrono::system_clock::now().time_since_epoch().count()));
	uniform_int_distribution<int> range(1, 100);
	int target = range(rng);

    //Declare user input
    int userChoice;

    do
    {
        //Request the user guess input.
        cout << "\nPlease gues the number between 1 and 100: ";
        cin >> userChoice;

        if (userChoice == 0)
        {
            break;
        }
        else if (userChoice == target)
        {
            cout << "You Win!\n" << endl;
        }
        else if (userChoice < target)
        {
            cout << "You have guessed low, try agian!...\n" << endl;
        }
        else if (userChoice > target)
        {
            cout << "You have guessed high, try agian!...\n" << endl;
        }
        
    } while (userChoice != target);
    
}