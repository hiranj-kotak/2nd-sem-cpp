#include "bits/stdc++.h"
using namespace std;
int main()
{
    int height[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter height for " << i + 1 << "member";
        cin >> height[i];
    }
    ofstream tofile;
    tofile.open("11_2.cpp", ios::out | ios::binary);

    return 0;
}