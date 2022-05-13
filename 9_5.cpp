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
class car
{
    string fuel;
    int no_Of_wheel;

public:
    void get_data()
    {
    }
};
int main()
{
    return 0;
}