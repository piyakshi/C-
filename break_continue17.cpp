#include<iostream>
using namespace std;
int main(){
    //break
    
    /*for(int i = 0 ; i< 4  ; i++){
       cout<<i<<endl;
        if (i==2)
        {
            break;
        }*/
       // cout<<i<<endl; in this case the 2 wll not print as bcz the prgm executed first
        

        //continue
       // cout<<"*******continue*********"<<endl;
        for (int a = 0; a < 40; a++)
        {
            
            if (a==3)
            {
                continue;
            }
            cout<<a<<endl;
            
        }
        

    
    return 0;
}