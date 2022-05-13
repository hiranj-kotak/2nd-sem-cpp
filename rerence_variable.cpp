#include "iostream"
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    int &a = x;
    cout << a << endl;
    a = y;
    cout << a << " " << x << " " << y << endl;
    return 0;
}