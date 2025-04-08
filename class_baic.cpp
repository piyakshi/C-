#include<iostream>
using namespace std;
class time 
{
    public :
    int hr , min ;
    void getdata()
    {
        cout<<"ebtr";
        cin>>hr>>min;
    }
    void display()
    {
        cout<<hr<<":"<<min<<endl;

    }
    time(){}
    operator int ( )
    {
        return(hr*60 + min);
    }


};
int main()
{
    time t1 ;
    t1.getdata();
    t1.display();
    int x ;
    x = t1 ; // operator overloading will run
    t1.display();
    cout<<x<<endl;
    
    return 0;
}