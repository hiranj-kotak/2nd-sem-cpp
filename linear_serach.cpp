#include"bits/stdc++.h"
using namespace std;

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9,0};
  int n;
  cin>>n;
  int index;
  for(int i=0;i<n;i++)
  {
    if(n == arr[i])
    {
      index = i;
    }
  }
  cout<<index;
}
