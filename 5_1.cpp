#include "iostream"
using namespace std;
struct Rectangle
{
    float height, width;

    void get_data();
    void area();
};

class Rectangle1
{
    float height, width;

public:
    void get_data();
    void area();
};

void Rectangle::get_data()
{
    // cout << "enter the height of rectangle";
    cin >> height;
    // cout << "enter the width of rectangle";
    cin >> width;
}
void Rectangle ::area()
{
    cout << "area of rectangle is : " << height * width;
}
void Rectangle1::get_data()
{
    // cout << "enter the height of rectangle";
    cin >> height;
    // cout << "enter the width of rectangle";
    cin >> width;
}
void Rectangle1 ::area()
{
    cout << "area of rectangle is : " << height * width;
}

int main()
{
    Rectangle r1;
    Rectangle1 r2;

    r1.get_data();
    r1.area();

    cout << endl
         << "*********** using class *********" << endl;
    r2.get_data();
    r2.area();

    return 0;
}