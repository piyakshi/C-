#include <iostream>
using namespace std;
// print *

int main()
{
    int j, k;
    for (j = 1; j <= 12; j++) // used for print rows
    {
        for (int k = 1; k <= j; k++) // used to print clumn
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}