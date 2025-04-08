#include<iostream>
using namespace std ;
int main()
{
    int a = 32 ;
    char c = 'a';
    cout<<"The value of a is :"<< a << endl ;
    cout<<"The value of c is :"<< c << endl ;
    
    a = 6 ;
    cout<<"The value of a is :"<< a << endl ;
    c = 'y';
    cout<<"The value of C is :"<< c << endl ;

    // constant where we can't change the value
    const int d = 6 ;
    cout<<"the value is d :"<< d << endl;
    //d = 8 ;
    //cout<<"The value of  is :"<< d<< endl ;



    return 0 ;
}