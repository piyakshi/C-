#include <iostream>
using namespace std;
class time
{
public:
    int hr, min;
    time(int h, int m)
    {
        hr = h;
        min = m;
    }
    void display()
    {
        cout << hr << ":" << min << endl;
    }
};

class minute
{
    int hr, min;

public:
    minute() {}
    minute(time t)
    {
        hr = t.hr;
        min = t.min;
    }
    void display()
    {
        cout << hr << ":" << min << endl;
    }
};
int main()
{
    time t1(2, 60);
    minute m1;
    t1.display();
    m1 = t1; // class - class conversion
    cout << "aftr class - class conversn" << endl;
    m1.display();

    return 0;
}