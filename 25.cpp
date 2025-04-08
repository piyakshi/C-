#include <iostream>
using namespace std;
class shop
{
    int itemprice[100];
    int counter;
    int itemid[100];

public:
    void count() { counter == 0; }
    void set_price(void);
    void display_price(void);
};

void shop ::set_price()
{
    for (int i = 0; i < counter; i++)
    {
        cout << " enetr the item id" <<counter+1 << endl;
        cin >> itemid[counter];
        cout << "enetr the item price" << endl;
        cin >> itemprice[counter];
        counter++;
    }
}

void shop ::display_price()
{
    for (int i = 0; i < counter; i++)
    {
    cout << "the item id is" << itemid[i] << "nd the price is" << itemprice[i] << endl;
        
    }
    
}
int main()
{
    shop s1;
    s1.count();
    s1.set_price();
    s1.set_price();
    s1.set_price();
    s1.display_price();
    return 0;
}