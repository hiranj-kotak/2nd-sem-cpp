// This program is prepared by 21it085 Henil Mendpara
#include <iostream>
using namespace std;
int main()
{
    int no1 = 10, no2 = 12;
    int &x = no1;
    int &r = no2;
    int &c = no1;
    // int &d[2] = {no1, no2};
    x = 75;
    cout << "no1  = " << no1<<endl;
    cout << "x = " << x + 20<<endl;
    cout << "no1=" << no1 + 10<<endl;
    cout << "21it085 Henil Mendpara";
    return 0;
}
