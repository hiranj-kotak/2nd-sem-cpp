#include "iostream"
#include "string.h"
using namespace std;

class Gate
{
    int reg_no;
    char name[10];
    char center;
    static int ECV_Cnt;
    static int ECS_Cnt;
    static int ECA_Cnt;

public:
    void get_data();
    void print_data();
    static void getcount();
};

static int Gate::ECV_Cnt, ECS_Cnt, ECA_Cnt;

void Gate::get_data()
{
    cin >> reg_no >> name >> center;
    if (center == 'V' || center == 'v')
    {
        ECV_Cnt++;
    }
    else if (center == 's' || center == 'S')
    {
        ECS_Cnt++;
    }
    else
    {
        ECA_Cnt++;
    }
}
void Gate::print_data()
{
    cout << name << endl
         << reg_no << endl
         << center << endl;
}
void Gate::getcount()
{
    cout << ECA_Cnt << endl
         << ECS_Cnt << endl
         << ECV_Cnt;
}
int main()
{

    return 0;
}