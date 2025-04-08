#include<iostream>
using namespace std;
class A {
    int a ;
     static int b ;
     public :
     A(int x , int y){
       // cout<<a<<" "<<b;
       a = x ;
       b = y ;
     }
     void show(){
        cout<<a<<" "<<b<<endl;
     }
     static void display()
     {
        cout<<b<<endl;
     }
};
int A :: b = 0 ;

int main()
{
    A obj(10,20), obj2(100,200);
    obj.show();
    obj2.show();
    A::display(); // static memeber function
    obj.show();
    
    return 0;
}