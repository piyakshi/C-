#include<iostream>
using namespace std;
class shop 
{
    int id ;
    float price ;
    public :
    void setdata(int x , int y){
        id = x ;
        price = y ;
    }

    void getData(void)
    {
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
    }

};
int main()
{
    int size = 2 ; // defining the size of the array 
    int p ;
    float q ;

    shop *ptr = new shop[size];
    shop *ptrTemp = ptr ;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the id and price of "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
      for (int i = 0;  i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}