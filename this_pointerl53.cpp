#include<iostream>
using namespace std;
class A 
{
    int a , b ;
    public :
    void setdata(int a , int b)
    {
        this->a = a ;
        this->b = b ; 

    }
    void showdata()
    {
        cout<<"a = "<<a<<"  "<<"b = "<<b<<endl;
    }
}; 
int main()
{
    A obj ;
    obj .setdata(4,5);
    obj.showdata();
    return 0;
}