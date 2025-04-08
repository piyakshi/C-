#include<iostream>
using namespace std;
class A
{
    int a , b ;
    public :
    void input()
    {
        cout<<"enetr the values : ";
        cin>>a>>b ;
    }
    friend void add( A ob);

};
void add( A ob )
{
    int c ;
     c = ob.a + ob.b;
     //c = a + b;
     cout<<"sum = "<<c<<endl;

}
int main()
{
    A kk;
    kk.input();
    add(kk);
    
    return 0;
}