#include <iostream>
#include <string>
using namespace std;

string Ndelete(string a, int n)
{
  string result = "";
  for(int i = 0; i < n; i++)
  {
    result.push_back(a[i]);
  }
  for(int j = n+1; j < a.size(); j++)
  {
    result.push_back(a[j]);
  }
  return result;
}

bool isAnagram(string a, string b)
{
  if(a.size() != b.size()){return false;}
  string s;
  for(int i = 0; i < a.size(); i++)
  {
    for(int j = 0; j < b.size(); j++)
    {
      if(a[i] == b[j])
      {
        b = Ndelete(b,j);
        j = 0;
      }
      else
      {
        continue;
      }
    }
  }
  
  if(b.size() == 0){return true;}
  return false;
}

int main()
{
  string s;
  cout<< "s = ";
  cin>> s;
  
  string t;
  cout<< "t = ";
  cin>> t;
  
  if(isAnagram(s,t)){cout<< "True";}
  else{cout<< "False";}
   
}