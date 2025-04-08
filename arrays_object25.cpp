#include<iostream>
using namespace std;
class employee
{
    int id ; 
    int salary ;
    public :
    void set_data(void)
    {
        salary = 122;
        cout<<"enter the is : ----";
        cin>>id;
    }
    void get_data(void){
        cout<<"the id is " <<id<<endl;
    }

};
int main()
{
    employee fb[4]; // we made 4 objects
    for (int i = 0; i < 4; i++)
    {
        fb[i].set_data();
        fb[i].get_data();

    }
    
    
    return 0;
}