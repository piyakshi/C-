#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void set_data(int a1, int b1, int c1);
    void get_data()
    {
        cout << "the value of a is" << a << endl;
        cout << "the value of b is" << b << endl;
        cout << "the value of c is" << c << endl;
        cout << "the value of d is" << d << endl;
        cout << "the value of e is" << e << endl;
    }
};
void employee :: set_data(int a1, int b1, int c1)
{
    a = a1 ;
    b = b1 ;
     c = c1 ;
}

int main()
{
    employee piya;
    piya.d = 66;
    piya.e = 68;
    piya.set_data(63, 64, 65);
    piya.get_data();

    //return 0;
}