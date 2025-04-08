#include <iostream>
using namespace std;

class complex; // forward declaration
class calculator
{
public:
   /* int add(int a, int b)
    {
        return (a + b);
    }*/
    int sumrealcomplex(complex, complex); // friend func
    int sumComcomplex(complex, complex);
};
class complex
{
    int a, b;

    // individually declaring function as friend
    // friend int calculator ::sumrealcomplex(complex, complex);
    // friend int calculator ::sumComcomplex(complex , complex );
    // complex class whole became friend clss

    // declaring the entire class as friend
    friend class calculator;
    // calculator class jate acces korte pare complex class er data de

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

int calculator ::sumComcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 2);
    o2.setnumber(3, 4);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of the real part is " << res << endl;
    int resc = calc.sumComcomplex(o1, o2);
    cout << "the sum of the complex part is " << resc << endl;

    return 0;
}