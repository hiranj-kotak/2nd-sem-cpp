#include <iostream>
using namespace std;
int main()
{
    const int i = 20;
    int j = 15;
    int *ptr = &j;
    j = i + (*ptr)++;
    const int *p = &i;
    cout << *ptr << " ";
    cout << *p;
    return 0;
}