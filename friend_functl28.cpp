#include<iostream>
using namespace std;

class y ; // forward declaration

class x 
{
    int data ;
    public :
    void setdata(int value) 
    {
        data = value ;
    }
    friend void add (x  , y  ); // so that add function woulf acces the private data data of x and y
};

 class y 
 {
    int num ;
    public :
    void setdata(int value) 
    {
        num = value ;
    }
    friend void add (x  , y  );


 };

 void add (x o1 , y o2 )
 {
    cout<<" add = "<<o1.data + o2.num ;

 }

int main()
{
    x a ;
    a.setdata(3);

    y b ;
    b.setdata(2);

    add(a,b);

     
    return 0;
}