#include<iostream>
using namespace std;
class student 
{
    protected :
    int roll_no;
    public :
    void get_no(int a )
    {
        roll_no = a ;
    }
    void put_no()
    {
        cout<<"roll no is "<<roll_no<<endl;
    }


};
class test : public student
{
    protected:
    float part1 , part2 ;
    public :
    void get_marks(float a , float b)
    {
        part1 = a ;
        part2 = b ;

    } void put_marks()
    {
        cout<<"marks obtained"<<endl;
        cout<<"part 1 is "<<part1<<endl<<" part 2 is "<<part2<<endl;
    }


};
class sports
{
    protected :
    float score ;
    public:void get_score(float s)
    {
        score = s ;
    }

     void put_score()
    {
        cout<<"sport score is "<<score<<endl;
    }

};
class result : public test , public sports
{
    float total ;
    public :
    void display()
    {
        total = part1 + part2 + score ;
        put_no();
        put_marks();
        put_score();
        cout<<"total score is "<<total <<endl;

    }


};
int main(){
    result s ;
    s.get_no(23);
    s.get_marks(27 , 16.5);
    s.get_score(22.5);
    s.display();

    
    return 0;
}