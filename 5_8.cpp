#include "bits/stdc++.h"
using namespace std;
class parent;
class child
{
    string name;
    char gender;
    friend class parent;

public:
    void get();
    void print();
};
class parent
{
    string c_name;
    char c_gender;

public:
    void read_child_data(child c1);
    void display_child_data();
};

void child::get()
{
    getline(cin, name);
    cin >> gender;
}
void child::print()
{
    cout << name << gender;
}
void parent::read_child_data(child c1)
{
    c_name = c1.name;
    c_gender = c1.gender;
}
void parent::display_child_data()
{
    cout << c_name << c_gender;
}
int main()
{
    child c1;
    parent p1;

    c1.get();
    c1.print();
    p1.read_child_data(c1);
    p1.display_child_data();

    return 0;
}