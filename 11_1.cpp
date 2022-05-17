#include "bits/stdc++.h"
using namespace std;
int main()
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ofstream tofile;
    tofile.open("11_1.txt");
    int pos = tofile.tellp();
    cout << pos << endl;
    tofile << a;
    pos = tofile.tellp();
    cout << pos << endl;
    tofile.close();

    ifstream infile("11_1.txt");
    char c;
    while (pos--)
    {
        infile.seekg(pos);
        infile >> c;
        cout << c;
    }
    infile.close();
    return 0;
}