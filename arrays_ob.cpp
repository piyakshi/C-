#include<iostream>
using namespace std;
class employee 
{
   char name[20];
   float age ;
   float salary ;
   public :
   void xerx(char a[20], float b ,float c )
   {

    name[20] = a[20] ;
    age = b ;
    salary = c ;
   }
   void getdata();
   void setdata();

};

void getdata(){
    cout<<"enter your name :--\n";
    cin>>a;
    cout<<"enter your age :--\n";
    cin>>b;
    cout<<"enter your salary :--\n";
    cin>>c;
}
int main(){
    
    return 0;
}