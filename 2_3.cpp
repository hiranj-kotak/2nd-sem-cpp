// this program is prepared by 21it085 Henil Mendpara
#include "iostream"
using namespace std;

class swapp
{
public:
    int a;
    void input()
    {
        cin >> a;
    }
    void output()
    {
        cout << a;
    }
} num1, num2;
int main()
{
    cout << "enter first number";
    num1.input();
    cout << "enter second number";
    num2.input();
    cout << "number before swapping" << endl;
    cout << "num1  = " << num1.a;
    cout << endl
         << "num2  = " << num2.a<<endl;
    num1.a = num1.a + num2.a;
    num2.a = num1.a - num2.a;
    num1.a = num1.a - num2.a;
    cout << "After swapping "<<endl;
    cout << "num1  = " << num1.a;
    cout << endl
         << "num2  = " << num2.a<<endl;
    cout << "21IT085 Henil Mendpara";
    return 0;
}
