#include "bits/stdc++.h"
using namespace std;

int leap(int year)
{
  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
}

void print_month(int month, int year,int date,int curr_month,int curr_year)
{
  int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int diff = year - 1900;
  for (int i = 1; i < (year - 1900); i++)
  {
    if (leap(i + 1900))
    {
      diff++;
    }
  }
  int jan1 = diff % 7;
  int i = month;
  int days = 0;
  if(leap(year))
  {
    arr[1]++;
  }
  while (--i)
  {
    days = days + arr[i];
  }
  int d1;
  d1 = arr[month-1];
  int day = (days + diff) % 7;
  //  day = (date + day) % 7;
  string month_name;
  switch (month)
  {
  case 1:
    month_name = "january";
    break;
  case 2:
    month_name = "february";
    break;
  case 3:
    month_name = "march";
    break;
  case 4:
    month_name = "april";
    break;
  case 5:
    month_name = "may";
    break;
  case 6:
    month_name = "june";
    break;
  case 7:
    month_name = "jully";
    break;
  case 8:
    month_name = "august";
    break;
  case 9:
    month_name = "september";
    break;
  case 10:
    month_name = "october";
    break;
  case 11:
    month_name = "november";
    break;
  case 12:
    month_name = "december";
    break;
  }
  cout << month_name << "," << year;
  char week[7][4] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};

  cout << endl;
  for (int i = 0; i < 7; i++)
  {
    cout << week[i] << "\t";
  }
  cout << endl;
  int d = 1;
  int week1[6][7];
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      if ((i == 0 && j < day) || d > d1)
      {
        cout << " "
             << "\t";
      }
      else
      {
        if(date == d && month == curr_month && year == curr_year)
        {
          cout<<"|"<<d<<"|"<<"\t";
          d++;
        }
        else
        {
          cout << d<<"\t";
          d++;
        }
      }
    }
    cout << endl;
  }
}
int main()
{
  time_t theTime = time(NULL);
  struct tm *aTime = localtime(&theTime);

  int curr_month = aTime->tm_mon + 1;
  int curr_year = aTime->tm_year + 1900;
  int date = aTime->tm_mday;
  int month = curr_month;
  int year = curr_year;
  print_month(month, year,date,curr_month,curr_year);
  cout << "enter \'d\' for next month" << endl
       << "enter \'a\' for previous month " << endl
       << "enter \'w\' for previous year" << endl
       << "enter \'s\' for next year " << endl
       << "enter \'x\' to exit " << endl
       <<"enter \'g\' to goto specific year and month"<<endl<<endl;

  char next;
  while (1)
  {
    cout << "enter \'w\',\'s\',\'a\',\'d\',\'g\' or \'x\' to toggle :  ";
    cin >> next;
    if (next == 'd')
    {
      month++;
    }
    else if (next == 'a')
    {
      month--;
    }
    else if (next == 'w')
    {
      year--;
    }
    else if (next == 's')
    {
      year++;
    }
    else if (next == 'x')
    {
      break;
    }
    else if(next  == 'g')
    {
      int goto_year,goto_month;
      cout<<"enter year you want to go : ";
      cin>>goto_year;
      cout<<"enter month you want to go : ";
      cin>>goto_month;
      year = goto_year;
      month = goto_month;
    }

    if (month > 12)
    {
      year++;
      month = 1;
    }
    system("cls");
    print_month(month, year,date,curr_month,curr_year);
  }
}
