#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void printno()
    {
        cout << " add the no " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void)
{
    a = 10;
    b = 0;
}

int main()
{
    complex a;
    a.printno();
    complex b;
    b.printno();

    return 0;
}