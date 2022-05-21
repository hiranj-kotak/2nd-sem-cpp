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
    ofstream tofile("students.dat", ios::binary);
    tofile.write((char *)&height, sizeof(height));
    tofile.close();
    int return_height[5];
    ifstream infile("students.dat", ios::binary);
    infile.read((char *)&return_height, sizeof(return_height));
    infile.close();
    for (int i = 0; i < 5; i++)
    {
        cout << return_height[i] << endl;
    }

    return 0;
}