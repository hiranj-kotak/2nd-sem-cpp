#include "iostream"
using namespace std;
class Number
{
    int num;

public:
    void input();
    void output();
    Number()
    {
        num = 0;
    }
    Number(int x)
    {
        num = x;
    }
    Number(Number &n1)
    {
        num = n1.num;
    }
    // int operator++()
    // {
    //     num = ++num;
    // }
    Number operator++(int)
    {
        num++;
        // return *this;
        return Number(num);
    }
    // int operator-()
    // {
    //     num = -num;
    // }
};

void Number::input()
{
    cin >> num;
}
void Number::output()
{
    cout << num;
}
int main()
{
    Number N(5);
    Number N1;
    N1 = N++;
    //-N;
    //  N++;
    N.output();
    N1.output();
    return 0;
}