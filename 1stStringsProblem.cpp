#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cout<< "Give the string : ";
  getline(cin,s);
  cout<< endl;
  
  for(int i = 0; i < s.size(); i++)
  {
    char ch = s[i];
    if(int(ch) >= 65 && int(ch) <= 90)
    {
      ch += 32;
      s[i] = ch;
      continue;
    }
    else
    {
      continue;
    } 
  }
  cout<< s;
}
