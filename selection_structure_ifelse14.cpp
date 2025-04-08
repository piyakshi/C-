#include<iostream>
using namespace std ;
int main (){
    int age ;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if ((age<18)&& (age>0)){
        cout<<"You can't come to the party";

    }
    else if (age == 18)
    {
        cout<<"You are ellligble to the party";

    }
     else if (age<1){
        cout<<"You can't come to the party";
     }
     else{
        cout<<"You can vome to the party ";
     }
    
}