 #include <iostream>
using namespace std;
struct school
{
    int regno;
    char name;
    float percentage;
};

int main()
{
    struct school student[10];
    student[0].regno = 1;
    student[0].name = 'a';
    student[0].percentage = 98.76;
    cout << student[0].regno << student[0].name << student[0].percentage << endl;

    student[1].regno = 2;
    student[1].name = 'b';
    student[1].percentage = 98.86;
    cout << student[1].regno << student[1].name << student[1].percentage << endl;

    return 0;
}