#include <iostream>
using namespace std;
int &Large(int &a, int &b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    Large(x, y) = 200;
    if (x == 200)
        cout << "First number is bigger.";
    else
        cout << "Second number is bigger.";
    return 0;
}