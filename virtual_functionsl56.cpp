#include <iostream>
using namespace std;
class base
{
public:
    int var_base = 1;
     virtual void display()
    {
        cout << " 1 Dispalying Base class variable var_base " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << " 2 Dispalying Base class variable var_base " << var_base << endl;

        cout << " 2 Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    base *base_class_pointer;// pointer
    derived obj_derived; //obj
    base_class_pointer = &obj_derived; 
    
    base_class_pointer->display();

    
    return 0;
}