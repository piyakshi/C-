#include<iostream>
using namespace std;
class base1
{
    protected :
    int data1;
    public :
    base1(int a ) // constructor
    {
        data1 =a ;
        cout<<"base 1 constructor has been called"<<endl; 
    }
    void print_base1()
    {
        cout<<"value data1 is : "<<data1<<endl;

    }

};
class base2
{
    int data2;
    public :
    base2(int a ) // constructor
    {
        data2 =a ;
        cout<<"base 2 constructor has been called"<<endl; 
    }
    void print_base2()
    {
        cout<<"value data2 is : "<<data2<<endl;

    }

};
class derived : public base1 , public base2 
{
    int derived1 , derived2 ;
    public :
    derived(int a , int b , int c , int d ) : base1(a) , base2(b) // constructor
    {
        derived1 = c ;
        derived2 = d ;

        cout<<" derived constructor has been called"<<endl; 
    }
    void print_derived()
    {
        cout<<"value derive 1 is : "<<derived1<<endl;
        cout<<"value derive 2 is : "<<derived2<<endl;

    }

};
int main(){
    derived op (1,2,3,4);
    op.print_base1();
    op.print_base2();
    op.print_derived();

    
    return 0;
}