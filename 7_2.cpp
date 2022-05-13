#include "iostream"
using namespace std;
class Complex
{
    friend void operator-(Complex &c);
    int real, im;

public:
    void print_data();
    Complex()
    {

        real = 1;
        im = 1;
    }
    Complex(int a, int b)
    {
        real = a;
        im = a;
    }
};

void Complex::print_data()
{
    cout << real << " + (" << im << ")i" << endl;
}
int main()
{
    Complex c1;
    c1.print_data();
    -c1;
    c1.print_data();
    return 0;
}
void operator-(Complex &c)
{
    c.real = -c.real;
    c.im = -c.im;
}