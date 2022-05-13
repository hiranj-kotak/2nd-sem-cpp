#include "iostream"
using namespace std;
class currency
{
    int rupee, paisa;

public:
    void enter();
    void show();
    currency sum(currency);
    void add(currency, currency);
};

void currency::enter()
{
    cout << "enter rupee : ";
    cin >> rupee;
    cout << "enter paisa : ";
    cin >> paisa;
}
void currency::show()
{
    if (paisa >= 100)
    {
        rupee = rupee + paisa / 100;
        paisa = paisa % 100;
    }
    cout << rupee << "." << paisa << endl;
}
currency currency::sum(currency c)
{
    currency ca;
    rupee = c.rupee + rupee;
    paisa = c.paisa + paisa;

    return ca;
}
void currency::add(currency c1, currency c2)
{
    rupee = c1.rupee + c2.rupee;
    paisa = c1.paisa + c2.paisa;
}

int main()
{
    currency c1, c2, c3, c4;
    c1.enter();
    // c1.show();
    cout << "enter for c2";
    c2.enter();
    // c2.show();
    // cout << "c3";
    c3 = c2.sum(c1);
    c3.show();
    c4.add(c1, c2);
    c4.show();
    return 0;
}