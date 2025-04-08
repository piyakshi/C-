#include<iostream>
using namespace std;
/*student
sports
test
reuslt
*/
class student 
{
    protected :
    int roll_no;
    public :
    void set_no(int a)
    {
        roll_no = a ;

    }
    void display_no()
    {
        cout<<"roll no is : "<<roll_no<<endl;
    }

}; 
class test : virtual public student
{
    protected:
    float maths , physics;
    public:
     void set_marks(float m1, float m2)
    {
        maths = m1 ;
        physics = m2 ;

    }
    void display_marks()
    {
        cout<<"maths marks : "<<maths<<endl;
        cout<<"physics marks : "<<physics<<endl;

        
    }

};
class sports : virtual public student{
    protected :
   
    int pt;
    public:
     void set_pt(int a)
    {
        pt = a ;

    }
    void display_score()
    {
        cout<<"pt score is: "<<pt<<endl;
    }

};
class result : public test , public sports
{
    private :
    float total ;
    public :
    void display(void)
    {
        total = maths + physics + pt ;
        display_no();
        display_marks();
        display_score();
        cout<<"total score "<<total<<endl;

    }


};
int main(){
    result piyakshi ;
    piyakshi.set_no(23);
    piyakshi.set_marks(27 ,16.5);
    piyakshi.set_pt(23);
    piyakshi.display();

    
    return 0;
}