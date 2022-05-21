#include "bits/stdc++.h"
using namespace std;
int main()
{
    pair<int, int> p;
    vector<pair<int, int>> v;
    int a[5] = {10, 9, 8, 7, 6};
    int b[5] = {3, 5, 6, 3, 5};
    for (int i = 0; i < 5; i++)
    {
        v.push_back(make_pair(a[i], b[i]));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i].first << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << v[i].second << " ";
    }
    return 0;
}