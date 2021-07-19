#include <iostream>
#include <string>
using namespace std;

string toRight(string s)
{
  string result = "";
  for(int i = 1; i < s.size(); i++)
  {
    result.push_back(s[i]);
  }
  result.push_back(s[0]);
  return result;
}

bool checkPossibility(string s, string g)
{
  for(int i = 0; i < s.size(); i++)
  {
    if(s == g)
    {
      return true;
    }
    else
    {
      s = toRight(s);
      continue;
    }
  }
  return false;
}

int main()
{
  string s;
  cout<< "s = ";
  cin>> s;
  cout<< endl;
  string goal;
  cout<< "Goal = ";
  cin>> goal;
  cout<< endl;
  
  if(checkPossibility(s, goal)){cout<< "true";}
  else{cout<< "false";} 
}