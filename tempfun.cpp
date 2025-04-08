#include<iostream>
using namespace std ;
template <class t >
void swap(t &x , t &y)
{

    t temp ;
    temp = x ;
    x = b ;
    y = temp ;
    cout<<x<<"\n"
    <<y<<"\n";
}
int  main()
{
    int a , b ;
    cout<<"enter 2 integers : -"<<endl;
    cin>>a>>b;
    swap(a,b);
    float c , d ;
    cout<<"enter 2 integers : -"<<endl;
    cin>>c>>d;
    swap(c,d);
   

}
