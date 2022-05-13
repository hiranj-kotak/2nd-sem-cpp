#include "iostream"
using namespace std;

class student
{
protected:
    int r;
    char name[100];
    void get_data()
    {
        int student::*p = &student::r;
    }
} s;

int main()
{
    int x = 20;
    int &y = x;
    int &a = x;
    //  int *b = &a;
    //    cout << *b << endl;

    //    cout << &s.r << endl;
    // cout << p;
    return 0;
}