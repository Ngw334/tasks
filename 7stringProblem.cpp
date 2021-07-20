#include <iostream>
#include <string>
using namespace std;

string reverse(string a)
{
  string result = "";
  for(int i = a.size() - 1; i >= 0 ; i--)
  {
    result.push_back(a[i]);
  }
  return result;
}

string equalsize(string a)
{
  string result = "";
  result.push_back('0');
  for(int i = 0; i < a.size(); i++)
  {
    result.push_back(a[i]);
  }
  return result;
}

string adder(string a, string b)
{
  int carry = 48;
  string c = "";
  
  if(a == "0" && b == "0"){return "0";}
  
  int result = 0;
  for(int i = a.size()-1, j = b.size()-1; i >= 0 || j >= 0; i--,j--)
  {
    result = carry + a[i] + b[j] - (3*48);
    int add = (result % 10) + 48;
    carry = (result / 10) + 48;
    c.push_back(add);
  }
  
  if(carry != 48){c.push_back(char(carry));}
  
  c = reverse(c);
  return c;
}

int main()
{
  string a;
  cout<< "a = ";
  cin>> a;
  
  string b;
  cout<< "b = ";
  cin>> b;
  while(a.size() != b.size())
  {
    if(a.size() < b.size())
    {
      a = equalsize(a);
    }
    else
    {
      b = equalsize(b);
    }
  }
  cout<< adder(a,b);  
}