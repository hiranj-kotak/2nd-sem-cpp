// This program is prepared by 21it085 Henil Mendpara

#include "iostream"
using namespace std;

struct college
{

  char college_name[10];
  char college_code[10];
  char department[5];
  int intake;
  void input()
  {
    cout << "+++++  Enter the College Information  +++++" << endl;
    cout << "name of the college :  ";
    cin >> college_name;
    cout << "college code :  ";
    cin >> college_code;
    cout << "Department :  ";
    cin >> department;
    cout << "Department In-take :  ";
    cin >> intake;
  }
  void output()
  {
    cout << "********** College Information *********" << endl;
    cout << "name of the college :  " << college_name;
    cout << endl;
    cout << "college code :  " << college_code;
    cout << endl;
    cout << "Department :  " << department;
    cout << endl;
    cout << "Department In-take :  " << intake;
    cout << endl;
  }
} C;
int main()
{

  C.input();
  cout << endl
       << endl;
  C.output();
    cout<<endl<<endl<<"21IT085 Henil Mendpara";
}
