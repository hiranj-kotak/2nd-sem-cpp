#include "bits./stdc++.h"
using namespace std;
class hospital
{
    string name;
    int roll_no;

public:
    void get_data()
    {
        // cout << "enter name : ";
        cin >> name;
        // cout << "enter roll no : ";
        cin >> roll_no;
    }
    void print_data()
    {
        cout << "name = " << name << endl
             << "roll_no = " << roll_no << endl;
    }
};
class ward : virtual public hospital
{
    int ward_no;

public:
    void get_data()
    {
        // cout << "enter ward number : ";
        cin >> ward_no;
    }
    void print_data()
    {
        cout << "ward_no = " << ward_no << endl;
    }
};
class room : virtual public hospital
{
    int bed_number;
    string nature_of_illness;

public:
    void get_data()
    {
        // cout << "enter bed number : ";
        cin >> bed_number;
        // cout << "enter nature of illness : ";
        cin >> nature_of_illness;
    }
    void print_data()
    {
        cout << "bed number = " << bed_number << endl
             << "nature of illness = " << nature_of_illness;
    }
};
class patient : public ward, public room
{
public:
    void get_data()
    {
        hospital::get_data();
        ward::get_data();
        room::get_data();
    }
    void print_data()
    {
        hospital::print_data();
        ward::print_data();
        room::print_data();
    }
};

int main()
{
    int n = 5;
    patient p[5];
    for (int i = 0; i < n; i++)
    {
        cout << "enter for " << i + 1 << "patient" << endl;
        p[i].get_data();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "value for " << i + 1 << "patient" << endl;
        p[i].print_data();
    }
    return 0;
}
