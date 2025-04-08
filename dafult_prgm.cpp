#include<iostream>
using namespace std;
float moneyReceived(int currentmoney ,  float factor = 1.04){
    return currentmoney*factor ;
}
int main()
{
    int money = 100000 ;
    cout<<"if you have "<< money  << "then you wll have "<<moneyReceived(money)<<endl; // without passing 2 argument
    cout<<" VIP : if you have "<< money  << "then you wll have "<<moneyReceived(money,1.1)<<endl;   
    return 0;
}