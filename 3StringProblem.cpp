#include <iostream>
#include <string>
using namespace std;
/*Q3-Given a string s, deterine if it is a palindrome, considering only alphabetic characters
     and ignoring the special characters.
*/

string upperToLower(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    char ch = s[i];
    if(ch >= 'A' && ch <= 'Z')
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
  return s;
}

bool isPalindrome(string s)
{
  s = upperToLower(s);
  string result = "";
  for (int i = 0; i < s.size(); i++)
  {
    if(s[i] >= 'a' && s[i] <= 'z')
    {
      result.push_back(s[i]);
      continue;
    }
    else
    {
      continue;
    }
  }
  
  int j = 0;
  while(j < s.size())
  {
    if(s[j] == s[s.size() - j - 1])
    {
      j++;
      continue;
    }
    else
    {
      return false;
    }
    return true;
  }
}

int main()
{
  string in1;
  cout<< "Give a string to check if it is a palindrome : ";
  cin>> in1;
  cout<< endl;
  
  if(isPalindrome(in1)){cout<< "TRUE" << endl;}
  else{cout<<"FALSE" << endl;}
  
}


