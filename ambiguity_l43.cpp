#include<iostream>
using namespace std;
// AMBIGUITY
class base1
{
    public :
    void display ()
    {
        cout<<"hello "<<endl;

    }

};
class base2
{
    public :
    void display ()
    {
        cout<<"hello world "<<endl;
        
    }

};
class derive : public base1 , public base2
{
    public :
    void display ()
    {
        cout<<"hello world !! "<<endl;
        
    }

};
int main(){
    derive ob ;
    ob.base1::display();
    ob.base2::display();

    ob.display();
    
    return 0;
}