#include "iostream"
using namespace std;

int &tonlarge(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a, b;
    cin >> a >> b;
    tonlarge(a, b) = 100;
    cout << a << endl
         << b;
    return 0;
}