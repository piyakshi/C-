#include <iostream>
using namespace std;
class c2;
class c1
{
    int a ;

public:
    friend void change(c1 &, c2 &); // 2 ta clss reh jokhn frnd declare kore 
    void setdata(int val1)
    {
        a = val1;
    }
    void display()
    {
        cout << "after changing the a = " << a <<endl;
    }
};
class c2
{
    int b;
    friend void change(c1 &, c2 &);

public:
    void setdata(int val2)
    {
        b = val2;
    }
    void display()
    {
        cout << "after changing the b = " << b  <<endl;
    }
};
void change(c1 &x, c2 &y) // x and y are object  reference
{
    int temp;
     temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    c1 aa ;
    c2  bb ;
     
    aa.setdata(2); 
    bb.setdata(4);

    change(aa,bb);
    aa.display();
    bb.display();

    return 0;
}