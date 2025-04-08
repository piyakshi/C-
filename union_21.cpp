#include<iostream>
using namespace std;
//better memmory management just like structure

union money
{
    int rice ; 
    char car ;
    float pound ;
};

int main(){
// at a time we csn ude only one
     union money m1;
        m1.rice = 34;
        m1.car = 'c';
       // cout<<m1.car;

        cout<<m1.rice;
        return 0;
    
    return 0;
}