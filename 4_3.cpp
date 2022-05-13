#include "iostream"
#include "cmath"
using namespace std;
// inline double power(double base, int pw = 2);
inline double power(double base = 3, int pw = 2)
{
    return pow(base, pw);
}
int main()
{
    double ans;
    double x;
    cin >> x;
    ans = power(7.0, 2);
    cout << power(2) << endl;
    cout << ans;
    cout << endl
         << power(x) << endl;
    cout << power() << endl;

    return 0;
}
