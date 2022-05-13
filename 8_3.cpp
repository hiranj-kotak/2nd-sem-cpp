#include "iostream"
using namespace std;
class alpha
{
    int x;

public:
    alpha() { x = 0; }
    alpha(int a) { x = a; }
    void display()
    {
        cout << "x = " << x << endl;
    }
};
class beta
{
    int y;

public:
    beta() { y = 0; }
    beta(int a) { y = a; }
    void display()
    {
        cout << "y = " << y << endl;
    }
};
class gamma : public alpha, public beta
{
    int m, n;

public:
    gamma()
    {
        m = 0;
        n = 0;
    }
    gamma(int a, int b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
    }
    void display()
    {
        cout << "m = " << m << endl
             << "n = " << n << endl;
        alpha::display();
        beta::display();
        }
};
int main()
{
    gamma g(10, 20, 30, 40);
    g.display();
    return 0;
}