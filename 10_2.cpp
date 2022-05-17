#include "bits/stdc++.h"
using namespace std;
ostream &mymanip(ostream &out)
{
    out.width(10);
    out.fill('0');
    return out;
}

int main()
{
    cout << mymanip << 102 << endl;
    return 0;
}