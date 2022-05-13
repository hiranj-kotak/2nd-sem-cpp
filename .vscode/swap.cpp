#include "iostream"
using namespace std;
void swapp(int &x, int &y)
{
    int a;
    a = x;
    x = y;
    y = a;
    // cout << x << " " << y;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swapp(a, b);
    cout << "after swapping" << endl;
    cout << a << endl
         << b;
    return 0;
}