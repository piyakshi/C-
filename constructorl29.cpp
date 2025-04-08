#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // constructor
    void printnumber()
    {
        cout << "complex for : " << a << " + " << b << " i " << endl;
    }
};
complex ::complex(void) // ----> this is default constructor
{
    a = 10;
    b = 20;
}
int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}