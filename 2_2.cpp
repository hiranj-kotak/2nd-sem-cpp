// This program is prepared by 21it085 Henil Mendpara
#include "iostream"

using namespace std;

class students
{
public:
  char name[10];
  char roll_no[10];
  int classs;
  char division;
  void input()
  {
    cout << "enter your name : ";
    cin >> name;
    cout << "enter your roll_no : ";
    cin >> roll_no;
    cout << "enter your class : ";
    cin >> classs;
    cout << "enter your division : ";
    cin >> division;
  }
  void output()
  {
    cout << " your name : " << name;
    cout << endl;
    cout << " your roll_no : " << roll_no;
    cout << endl;
    cout << " your class : " << classs;
    cout << endl;
    cout << " your division : " << division;
    cout << endl;
  }
} S[5];

int main()
{
  for (int i = 0; i < 5; i++)
  {
    cout << "Enter details of " << i + 1 << " student" << endl;
    S[i].input();
    cout << endl;
  }
  cout << endl
       << "****************************" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << "Details of " << i + 1 << " student is " << endl;
    S[i].output();
    cout << endl;
  }
   cout<<endl<<endl<<"21IT085 Henil Mendpara";
}
