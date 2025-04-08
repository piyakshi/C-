#include<iostream>
using namespace std ;

class employee // base class
{
    public :
    int id ;
    float salary ;
    employee(int ipd)
    {
        id = ipd ;
        salary = 34.04 ;
    }

    employee(){} // default constructor

};

class program : public employee  // derived class
{
    public :
    int laguagecode ;
    program(int ipd)
    {
        id = ipd ;
        laguagecode = 9 ;
    }
    void getdata()
    {
        cout<<id<<endl;
    }

};

int main()
{
    employee harry(2) , piya(5);//clss objcts
    cout<<harry.salary<<endl;
    cout<<harry.id<<endl;
    cout<<piya.salary<<endl;
    cout<<piya.id<<endl;
    program skillf(10);
    cout<<skillf.id<<endl;
    cout<<skillf.laguagecode<<endl;
    skillf.getdata();




}