#include "bits/stdc++.h"
using namespace std;
class shape
{
    string shape_name;

public:
    void get_data()
    {
        cin >> shape_name;
    }
    void print_data()
    {
        cout << "shape name  = " << shape_name << endl;
    }
};
class circle : public shape
{
    float radius;

public:
    void get_data()
    {
        cin >> radius;
    }
    float get_radius()
    {
        return radius;
    }
    void print_data()
    {
        cout << "radius = " << radius << endl;
    }
};
class area : public circle
{
    float area_of_circle;

public:
    void get_data()
    {
        shape::get_data();
        circle::get_data();
    }
    void print_data()
    {
        area_of_circle = get_radius() * get_radius() * 3.14;
        shape::print_data();
        circle::print_data();
        cout << "area of circle is " << area_of_circle << endl;
    }
};
int main()
{
    area A;
    A.get_data();
    A.print_data();
    return 0;
}