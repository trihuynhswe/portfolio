#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 10;
    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << "|" << pow(i, 2);
        if (i == n) {
            cout << "|" << endl;
        }
    }
    cout << endl;
    return 0;
}