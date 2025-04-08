#include <iostream>
using namespace std;

class complex; // forward declaration
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex); // we need permission to acess the data of class complex
};

class complex
{
    int a, b;
    friend int calculator ::sumrealcomplex(complex, complex);
    // friend func , so tht sumreal would access the private data of complex
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 2);
    o2.setnumber(3, 4);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of the real part is " << res << endl;

    return 0;
}