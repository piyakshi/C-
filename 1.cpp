#include <iostream>
using namespace std;
class Base
{

public:
    int data1, data2;

    void set_data()
    {
        data1 = 10;
        data2 = 20;
    }
};

class Derive : public Base
{
public:
    int data3;

    void show_data()
    {
        cout << "data1 = " << data1 << endl;
        cout << "data2 = " << data2 << endl;
        cout << "data3 = " << data3 << endl;
    }
};

int main()
{
    Derive der;
    der.set_data();
    der.show_data();

    return 0;
}