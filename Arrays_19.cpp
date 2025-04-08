#include<iostream>
using namespace std;

int main()
{
    // this is one method to declare an array
    int marks[]={24,5,8,6};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // another metthod
    int mathmarks[4];
    mathmarks[0]=987;
    mathmarks[1]=993;
    mathmarks[2]=984;
    mathmarks[3]=994;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;

    mathmarks[2]=999; // we can change the value before the program prints
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    int piyakshi[]={23,33,21,12};
    for (int i = 0; i < 4; i++)
    {
        cout<<"piyakshi's marks" << i <<" is "<< piyakshi[i]<< endl;
    }
    //do the same using while and do while

    //pointer arithmatic

    int*p= marks;
    cout<<*p<<endl;
    //cout<<*(++p)<<endl;
    cout<<"The value of *p is "<< *p<<endl;
    cout<<"The value of *(p+1) is "<< *(p+1)<<endl;
    cout<<"The value of *(p+2) is "<< *(p+2)<<endl;
    cout<<"The value of *(p+2) is "<< *(p+3)<<endl;

    //cout<<"The value of *(p+3) is "<< *(p+3)<<endl;

    return 0;

    
}