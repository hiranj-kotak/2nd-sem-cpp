// This program is prepared by 21it085 HENIL MENDPARA

#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
  float a, b;
  cout << "Enter first number : ";
  cin >> a;
  cout << "Enter second number : ";
  cin >> b;
  float *p, *q;
  p = &a;
  q = &b;
  float sum;
  sum = *p + *q;
  cout << "your answer is : ";
  cout << setprecision(2) << fixed << scientific << sum;
   cout<<endl<<endl<<"21IT085 HENIL MENDPARA";

  return 0;
}
