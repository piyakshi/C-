#include<iostream>
using namespace std;
class employee {
    int id ;
     static int count ;
    public :
    void set_data(void) 
    {
        cout<<"enter teh id :--- ";
        cin>>id;
        count++ ;

    }
    void get_data(void)
    {
      cout<<"the id of this employe is "<< id << "and this employee no "<< count <<endl;
    }
    static void getcount(void)
    {
      cout<<"the no of this employe is "<<count<<endl;


    }
    
};
int employee :: count = 1000 ;
int main(){
    employee kal , piya , piyak ;
    kal.set_data() ;
    kal.get_data(); 
    employee:: getcount();


    piya.set_data();
    piya.get_data();
    employee:: getcount();


    piyak.set_data();
    piyak.get_data();
    employee:: getcount();


    
    return 0;
}