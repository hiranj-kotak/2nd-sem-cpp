#include <bits/stdc++.h>
using namespace std;
class Medicine
{
    string type, name_of_company, date_of_mfg;

public:
    Medicine()
    {
        type = "teblet";
        name_of_company = "hk";
        date_of_mfg = "10/10/10";
    }
    Medicine(string type1, string name_of_company1, string date_of_mfg1)
    {
        type = type1;
        name_of_company = name_of_company1;
        date_of_mfg = date_of_mfg1;
    }
    void display1()
    {
        cout << type << name_of_company << date_of_mfg << endl;
    }
};
class Tablet : public Medicine
{
    string name_of_tablet;
    int quantity;
    float price;

public:
    Tablet()
    {
        name_of_tablet = "";
        quantity = 0;
        price = 0;
    }
    Tablet(string name, int q, float p)
    {
        name_of_tablet = name;
        quantity = q;
        price = p;
    }
    void display()
    {
        display1();
        cout << name_of_tablet << quantity << price << endl;
    }
};
class Syrup : public Medicine
{
    float quantity, dosage_unit;

public:
    Syrup() {}
    Syrup(float q, float dosage)
    {
        quantity = q;
        dosage_unit = dosage;
    }
    void display2()
    {
        display1();
        cout << quantity << dosage_unit << endl;
    }
};
int main()
{
    Tablet t("paracitamol", 10, 2);
    Syrup s(500, 100);
    t.display();
    s.display2();

    return 0;
}