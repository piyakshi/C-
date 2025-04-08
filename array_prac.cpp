// take input from user and store them in an array

#include <iostream>
using namespace std;
int main()
{
    int num[5];
    cout << "the numbers are :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    cout << "the numbers are :";
    for (int i = 0; i< 5; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}