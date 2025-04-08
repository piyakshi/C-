#include <iostream>
#include <string.h>
using namespace std;
class musician
{
public:
    string name_musician;
    int genre_music, year_musicband, num_hit;
    string highest_fees;

    musician()
    {

        name_musician = "arijit";
        genre_music = 980;
        year_musicband = 1990;
        num_hit = 10000;
        highest_fees = "five lakhs";
    }
    musician(string nm, int gm, int y, int nh, string hf)
    {
        name_musician = nm;
        genre_music = gm;
        year_musicband = y;
        num_hit = nh;
        highest_fees = hf;
    }
    void display()
    {
        cout << name_musician << endl
             << genre_music << endl
             << year_musicband << endl
             << num_hit << endl
             << highest_fees << endl;
    }
};
int main()
{
    musician coldplay;
    musician taylor("Kishore ", 1965,1947,90000,"twenty lakhs");
    coldplay.display();
    taylor.display();

    return 0;
}