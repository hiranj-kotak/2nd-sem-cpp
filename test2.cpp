#include "iostream"
using namespace std;
class XYZ;
class ABC
{
    << endl int a;
    friend class XYZ;

public:
    ABC()
    {
        cout << "constructor of abc" << endl;
    }
    ABC(int n)
    {
        cout << "parameterized" << endl;
    }
};
class XYZ
{
    int x;

public:
    XYZ()
    {
        ABC a1;
        cout << "constructor of xyz" << endl;
    }
    XYZ(int n)
    {
        x = n;
        cout << "parameterized" << endl;
    }
};
int main()
{
    XYZ a;
    ABC b;
    XYZ X1(3);
    // b = a;

    return 0;
}