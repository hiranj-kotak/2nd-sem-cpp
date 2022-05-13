#include "iostream"
#include "math.h"
using namespace std;
int divide(int a, int b);
int divide(int a);
float divide(float a, float b, float c);

int main()
{
    // divisible
    int divi;
    int div1 = 7, div2 = 6;
    cout << "enter numerator and denomenator : ";
    cin >> div1 >> div2;
    divi = divide(div1, div2);
    if (divi)
    {
        cout << div1 << " is not divisible by  " << div2 << endl;
    }
    else
    {
        cout << div1 << " divisible by " << div2 << endl;
    }
    // prime

    int prime, pr = 8;
    cout << "enter number";
    cin >> pr;
    prime = divide(pr);
    if (prime)
    {
        cout << pr << " is  not prime" << endl;
    }
    else
    {
        cout << pr << " is  prime" << endl;
    }
    // average
    float avg;
    float num1 = 1.2, num2 = 4.5, num3 = 6.7;
    cout << "enter the numbers : ";
    cin >> num1 >> num2 >> num3;
    avg = divide(num1, num2, num3);
    cout << "average of " << num1 << ", " << num2 << "and " << num3 << " is " << avg << endl;

    return 0;
}

inline int divide(int a, int b)
{
    int rem;
    rem = a % b;
    return rem;
}
inline int divide(int a)
{
    int b = sqrt(a);
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
inline float divide(float a, float b, float c)
{
    float sum = a + b + c;
    float avg = sum / 3;
    return avg;

    return 0;
}