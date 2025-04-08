#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void set_num(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    friend complex sumcomplex(complex o1, complex o2); // friend func
    //

    void print_no()
    {
        cout << " Your no is " << a << " + " << b << " i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2) // function , so that it could acess the private data of class complex
{
    complex o3;
    o3.set_num((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.set_num(1, 2);
    c1.print_no();

    c2.set_num(3, 4);
    c2.print_no();

    sum = sumcomplex(c1, c2);
    sum.print_no();

    return 0;
}