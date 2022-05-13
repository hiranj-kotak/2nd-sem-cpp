#include <iostream>
using namespace std;
int gcd(long int a, long int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, long int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int d = lcm(x, y * 5);
    int dd = lcm(d, z * 10);
    cout << dd - x << " " << (dd - (y * 5)) / 5 << " " << ((dd - (z * 10)) / 10) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}