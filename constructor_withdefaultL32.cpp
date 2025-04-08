#include <iostream>
using namespace std;
class no
{
    int a, b, c;

public:
    no(int x, int y = 90, int z = 5)
    {
        a = x;
        b = y;
        c = z;
    }
    void prinno();
};
void no ::prinno()
{
    cout<<" your no is "<<a<<","<<b<<" and "<<c;
}
int main()
{
    no a(4);
    a.prinno();

    return 0;
}