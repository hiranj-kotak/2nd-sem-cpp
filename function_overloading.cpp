#include "iostream"
using namespace std;
int display(int a);
float display(float a, float b);
float display(float a);
float display(float a, float b, float c);

int main()
{
    int square = 5;
    int area = display(square);
    cout << "Area of square whose side is " << square << " is : " << area << endl;

    float length = 10.1, breadth = 5.5;
    float perimeter = display(length, breadth);
    cout << "Perimeter of rectangle whose sides are " << length << " and " << breadth << " is : " << perimeter << endl;

    float side = 15.5;
    float volume = display(side);
    cout << "voulume of cube whose sides is " << side << " is  : " << volume << endl;

    float a = 100, b = 95.5, c = 97.5;
    float result = display(a, b, c);
    cout << "reslut of student whose marks are " << a << ", " << b << " and " << c << " is : " << result << endl;

    return 0;
}
int display(int a)
{
    return a * a;
}

float display(float a, float b)
{
    return 2 * (a + b);
}
float display(float a)
{
    return a * a * a;
}

float display(float a, float b, float c)
{
    float ans = a + b + c;
    float result = ans / 3;
    return result;
}
