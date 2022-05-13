#include "iostream"
using namespace std;
class vehicle
{
    float avg;

public:
    void virtual getdata() = 0;
    void putdata()
    {
        cout << avg << endl;
    }
};
class car : public vehicle
{
    string fuel;
    int no_of_wheel;

public:
    void getdata()
    {
        cin >> fuel >> no_of_wheel;
    }
    void put_data()
    {
        cout << fuel << no_of_wheel;
    }
};
class truck : public vehicle
{
    string fuel;
    int no_of_wheel;

public:
    void getdata()
    {
        cin >> fuel >> no_of_wheel;
    }
    void put_data()
    {
        cout << fuel << no_of_wheel;
    }
};
int main()
{
    car c[2];
    truck t[2];
    for (int i = 0; i < 2; i++)
    {
        c[i].getdata();
    }
    for (int i = 0; i < 2; i++)
    {
        t[i].getdata();
    }
    for (int i = 0; i < 2; i++)
    {
        c[i].put_data();
    }
    for (int i = 0; i < 2; i++)
    {
        t[i].put_data();
    }
    return 0;
}