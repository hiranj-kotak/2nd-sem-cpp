#include <iostream>
using namespace std;
class base
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << endl;
    }
};
class derived : public base
{
public:
    int d;
    void show()
    {
        cout << "b = " << b << endl;
        cout << "d = " << d << endl;
    }
};
int main()
{
    base *bptr;
    base base;
    bptr = &base;
    bptr->b = 100;
    cout << "bptr poins to base objects" << endl;
    bptr->show();
    derived deri;
    bptr = &deri;
    bptr->b = 200;
    ((derived *)bptr)->d = 300; // wont work
    cout << "bptr now points to derived object" << endl;
    bptr->show();
    derived *dptr;
    dptr = &deri;
    dptr->d = 300;
    cout << "Dptr is derived type pointer" << endl;
    dptr->show();
    return 0;
}
