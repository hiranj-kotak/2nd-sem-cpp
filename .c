#include"stdio.h"

void f(int a)
{
  if(a<1)return;
  f(a-1);
  f(a-3);
   static int b=1;
  printf("%d \n",b);
  b++;
}
int main()
{
  f(6);
}
