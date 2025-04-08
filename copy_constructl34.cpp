#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num) // paramatarized constrct
    {
        a = num; 
    }

    number(number &obj) // copy constructor
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void show()
    {
        cout << "the no fr ths object is " << a << endl;
    }
};

int main()
{
    number x, y, z(9), z2;
    x.show();
    y.show();
    z.show();
    // in copy constructor z1 should exactly resembles like z

    number z1(z); // copy constructor invoked
    z1.show();

    z2 = z; // copy constructor not invoked
    z2.show();

    number z3 = z; // copy constructor invoked
    z3.show();

    // copy constructor

    return 0;
}