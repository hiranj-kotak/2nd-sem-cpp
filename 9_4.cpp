#include "bits/stdc++.h"
using namespace std;
class media
{
    string title;
    float price;

public:
    media();
    media(string t, float p)
    {
        title = t;
        price = p;
    }
    void virtual display()
    {
        cout << title << price << endl;
    }
};
class book : public media
{
    int page_count;

public:
    book();
    book(int page, float p, string t) : media(t, p)
    {
        page_count = p;
    }
    void display()
    {
        cout << "displaying book data" << endl;
        media::display();
        cout << page_count << endl;
    }
};
class tape : public media
{
    float time;

public:
    tape(float tim, float p, string t) : media(t, p)
    {
        time = tim;
    }
    void display()
    {
        cout << "displaying tape data" << endl;
        media::display();
        cout << time << endl;
    }
};
int main()
{
    cout << "enter book details:" << endl;
    cout << "enter book title : ";
    string title;
    cin >> title;
    cout << "enter price : ";
    float price;
    cin >> price;
    cout << "enter page count : ";
    int page_count;
    cin >> page_count;
    book b(page_count, price, title);
    cout << "enter time of recording : ";
    float time;
    cin >> time;
    tape t(time, price, title);
    b.display();
    cout << endl;
    t.display();

    return 0;
}