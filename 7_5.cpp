#include <iostream>
using namespace std;
class Fahrenheit;
class Celsius
{
    float tempc;

public:
    Celsius()
    {
        tempc = 35;
    }
    Celsius(float c)
    {
        tempc = c;
    }
    float getc()
    {
        return tempc;
    }
    void put()
    {
        cout << "The Temperature in Celsius is " << tempc;
    }
};
class Fahrenheit
{
    float tempf;

public:
    Fahrenheit()
    {
        tempf = 28;
    }
    Fahrenheit(Celsius c)
    {
        tempf = (((9.0 / 5) * c.getc()) + 32);
    }
    void put()
    {
        cout << "\nThe Temperature in Fahrenheit is " << tempf;
    }
};
int main()
{
    Celsius C1, C2 = 5.0;
    Fahrenheit F1, F2;
    F1 = C2;
    C2.put();
    F1.put();
    return 0;
}
