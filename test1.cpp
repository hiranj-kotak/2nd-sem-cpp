#include "bits/stdc++.h"
#include "conio.h"
using namespace std;
int main()
{
    string str;
    while (true)
    {
        cin >> str;
        if (kbhit() == 27)
        {
            break;
        }
    }
    return 0;
}