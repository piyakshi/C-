#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
       complex(int x , int y)
    {
        a = x;
        b = y;
    }
       complex(int x)
    {
        a = x;
        b = 0;
    }
    void printno()
    {
        cout << "your no is "<< a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex a ;
    a.printno();
    complex b (2,3);
    b.printno();
    complex c(33);
    c.printno();

    return 0;
}