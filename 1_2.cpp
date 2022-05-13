// this program is prepared by 21it085 henil mendpara
#include "iostream"
#include "iomanip"
using namespace std;
int main()
{
  int n;
  cout << "Enter your number : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << setw(n) << i * j;
    }
    cout << endl;
  }

  cout << "21IT086 HENIL MENDPARA";
  return 0;
}
