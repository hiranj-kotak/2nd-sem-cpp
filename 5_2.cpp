#include "iostream"
using namespace std;

class batsman
{
    char name[10];
    int code;
    int innings, not_out, runs;
    float batting_avg;
    void calc_avg();

public:
    void get_data();
    void print_data();
};

void batsman::get_data()
{
    cout << "enter name of the batsman";
    cin >> name;
    cout << "enter code of batsman";
    cin >> code;
    cout << "enter no of innings";
    cin >> innings;
    cout << "enter no of match remaining not out";
    cin >> not_out;
    cout << "enter no of runs";
    cin >> runs;
    calc_avg();
}
void batsman::calc_avg()
{
    batting_avg = (float)runs / (innings - not_out);
}
void batsman::print_data()
{
    cout << " name of the batsman : " << name << endl;
    cout << "code of batsman : " << code << endl;
    cout << "no of innings : " << innings << endl;
    cout << "no of match remaining not out : " << not_out << endl;
    cout << "no of runs : " << runs << endl;
    cout << "batting average of player is : " << batting_avg << endl;
}

int main()
{
    batsman bat;
    bat.get_data();
    bat.print_data();

    return 0;
}