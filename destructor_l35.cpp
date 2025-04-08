#include <iostream>
using namespace std;
int count = 0; // global variable
class num
{
public:
    num()
    {
        count++;
        cout << "   This is the time when constructor is called for object number    " << endl;
    }
    ~num()
    {
        cout << " This is the time when my destructor is called for object number  " << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;

    num n1;// first it will go inside the 1st ob n1 and then it will destroy the other objects n2 ans n3
    {
        cout << "enetring the main block"<<endl;
        cout << " creating 2 more block"<<endl;
        num n2, n3; // two more objects has been created
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}