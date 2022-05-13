#include "iostream"
using namespace std;
class celsius
{
    float temp;

public:
    celsius()
    {
        temp = 30.3;
    }
    celsius(float a)
    {
        temp = a;
    }
    celsius(const celsius &c)
    {
        temp = c.temp;
    }
    celsius operator=(float a)
    {
        temp = a;
        return *this;
    }

    operator float()
    {
        float c1 = temp;
        return c1;
    }
    void put();
};
void celsius::put()
{
    cout << temp;
}
int main()
{
    //  basic to class type conversion right to left through constructor
    float temperature = 30.7;
    // celsius c1;
    celsius c1 = temperature;
    celsius c3(temperature);
    celsius c4;
    c4 = temperature;
    c1.put();
    // float c2 = c1; // c2.operator = (c1)
    // class to basic type
    celsius c6(temperature);
    float t = 300.50;
    c6.put();
    cout << endl
         << t << endl;
    t = c6;
    cout << t << endl;

    return 0;
}