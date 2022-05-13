#include "bits/stdc++.h"
using namespace std;
int main()
{
    string num;
    cin >> num;
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        int n = (num[i] - '0');
        //  cout << n;
        sum += n;
    }
    cout << 45 - sum;
}