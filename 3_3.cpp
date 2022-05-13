#include"iostream"
#include"iomanip"

using namespace std;

int main()
{
  int *arr;
  int n,i;
  cout<<"Enter the size of array:";
  cin>>n;
  cout<<endl;
  arr = new int[n];
  if(!arr)
  {
    cout<<"memory not allocated";
  }
  else
  {
    cout<<"Enter the elements"<<endl;
    for(i =0 ;i<n;i++)
    {
      cout<<"arr["<<i<<"] : ";
      cin>>arr[i];
    }
    cout<<endl<<"Eleents with increment of 2:"<<endl;
    for(i=0;i<n;i++)a
    {
      cout<<"arr["<<i<<"] : "<<arr[i] + 2<<endl;
    }
  }
  delete []arr;
  cout<<"by 21IT085 HENIL MENDPARA";
  return 0;
  }
