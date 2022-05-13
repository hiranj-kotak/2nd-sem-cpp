#include "iostream"
using namespace std;
class dist
{
    float feet;
    float inch;

public:
    void scale(dist &, float sf);
    void init();
    void show();
};

void dist::init()
{
    cin >> feet;
    cin >> inch;
}

void dist::scale(dist &c1, float sf)
{
    c1.feet = (float)c1.feet * sf;
    c1.inch = (float)c1.inch * sf;
}
void dist::show()
{
    cout << feet << "\'-" << inch << "\"";
}
int main()
{
    dist d1;
    d1.init();
    d1.scale(d1, 0.5);
    d1.show();

    return 0;
}