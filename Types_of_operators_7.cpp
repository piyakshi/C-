#include<iostream>
using namespace std ;
int main(){
    int a = 4 , b = 5 ;
    cout<<"operators in c ++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    //Arithmetic operators
    cout<<"The value of a + b is "<<(a+b)<<endl;
    cout<<"The value of a - b is "<<(a-b)<<endl;
    cout<<"The value of a * b is "<<(a*b)<<endl;
    cout<<"The value of a / b is "<<(a/b)<<endl;
    cout<<"The value of a % b is "<<(a%b)<<endl;
    cout<<"The value of a ++ is "<<(a++)<<endl;
    cout<<"The value of a -- is "<<(a--)<<endl;
    cout<<"The value of ++a is "<<(++a)<<endl;
    cout<<"The value of --a  is "<<(--a)<<endl;

    cout<<endl ;
    cout<<endl ;

    // Comparison operators
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"The value of a== b is "<<(a==b)<<endl;
    cout<<"The value of a!= b is "<<(a!=b)<<endl;
    cout<<"The value of a>= b is "<<(a>=b)<<endl;
    cout<<"The value of a<= b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;

    cout<<endl ;

    //logical operators
    cout<<"Following are the logical operators"<<endl;
    cout<<"The value of this logical oroperator((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl ;
    cout<<"The value of this logical and operator(!(a==b)) is "<<(!(a==b))<<endl ;

    //assign operators
    //a = b , c = d
    // char d ='d';

    return 0 ; 
}