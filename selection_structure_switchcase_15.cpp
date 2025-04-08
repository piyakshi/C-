#include<iostream>
using namespace std ;
int main()
{
    int age ;
    cout<<"Tell me your age :";
    cin>>age ;
    switch(age){
        case 18:
        cout<<"age is 18"<<endl;
        break ;
        case 2:
        cout<<"age is 2"<<endl;
        break ;
        default:
        cout<<"no special case"<<endl;
        break;
    }
    cout<<"done"<<endl;

}