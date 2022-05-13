#include"bits/stdc++.h"
using namespace std;
int main()
{
  time_t theTime = time(NULL);
  struct tm *aTime = localtime(&theTime);

  int day = aTime->tm_mday;
  int month = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
  int year = aTime->tm_year + 1900; // Year is # years since 1900

  cout<<month;

}
