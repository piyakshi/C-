#include <iostream>
using namespace std;
class number // base class
{
private:
    int n;

public:
    void set_number()
    {
        cout << "enter the number" << endl;
        cin >> n;
    }
    int get_number()
    {
        return n;
    }
};
class square : public number // derive 1
{
public:
    int get_square()
    {
        int num , sqr;
        num = get_number();
        sqr = num * num;
        return sqr;
    }
};
class cube : public number // derive 1
{
public:
    int get_cube()
    {
        int num, c;
        num = get_number();
        c = num * num * num;
        return c;
    }
};
int main()
{
    square obj1;
    cube obj2;
    int sqr, c;
    obj1.set_number();
    sqr = obj1.get_square();
    cout << "square is " << sqr << endl;
    obj2.set_number();
    c = obj2.get_cube();
    cout << "cube is " << c << endl;
    return 0;
}