#include "iostream"
using namespace std;
class Date
{
    int dd, mm, yyyy;
    friend void swapp(Date &d1, Date &d2);

public:
    void get();
    void print();
};
void Date::get()
{
    cout << "enter date: ";
    cin >> dd >> mm >> yyyy;
}
void Date::print()
{
    cout << dd << " - " << mm << "-" << yyyy;
}
int main()
{
    Date d1, d2;
    d1.get();
    d2.get();
    cout << "befre swapp : ";
    d1.print();
    d2.print();
    swapp(d1, d2);
    cout << "after swapp";
    d1.print();
    d2.print();

    return 0;
}

void swapp(Date &d1, Date &d2)
{
    Date d;
    d = d1;
    d1 = d2;
    d2 = d;
}