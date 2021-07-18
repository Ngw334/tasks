#include <iostream>
#include <string>
using namespace std;

bool isAbsent(string s)
{
  int result = 0;
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == 'A')
    {
      result++;
      continue;
    }
    else
    {
      continue;
    }
  }
  if(result >= 2){return  false;}
  return true;
}

bool isLate(string s)
{
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L')
    {
      return false;
    }
    else
    {
      continue;
    }
  }
  return true;
}

int main()
{
  string s;
  cout<< "Give the attendance : ";
  cin>> s;
  
  if(isAbsent(s) && isLate(s))
  {
    cout<< "Eligible.";
  }  
  else
  {
    cout<< "Not Eligible.";
  }
  
}