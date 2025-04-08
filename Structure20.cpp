#include <iostream>
using namespace std;

//both structure and typedef syntex is written 

/*struct employe{
  int id ;
  char favchar;
  float salary ;
};*/

typedef struct school
{
    int no;
    float amount;
} scl;

// we can use both the methods

int main()
{
    // structure --> is a collection of dissimilar data types
    /*struct employe harry ;
    harry.id = 1 ;
    harry.favchar = 'a';
    harry.salary = 66328.98;
    cout<< "the id "<< harry.id <<" char is " << harry.favchar << " and the salary is " << harry.salary<< endl;

    struct employe piyakshi;
    piyakshi.eid = 2 ;
    piyakshi.favchar = 'b';
    piyakshi.salary = 66328.98;
    cout<< "the id "<< piyakshi.eid <<" char is " << piyakshi.favchar << " and the salary is " << piyakshi.salary<< endl;
     */

    //***************************************Typedef***************************************************
    scl piyakshi;
    piyakshi.no = 4;
    piyakshi.amount = 255000;
    cout << piyakshi.no << piyakshi.amount << endl;

    return 0;
}