#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == s[s.size() - i - 1])
    {
      continue;
    }
    else
    {
      return false;
    }
  }
  return true;
}

string nDelete(string s, int n)
{
  string result = "";
  for(int i = 0; i < n; i++)
  {
    char ch = s[i];
    result.push_back(ch);
  }
  for(int i = n+1; i < s.size(); i++)
  {
    char ch = s[i];
    result.push_back(ch);
  }
  return result;
}

bool isPalindromeAfterDeleting(string s)
{
  if(isPalindrome(s)){return true;}
  for(int i = 0; i < s.size(); i++)
  {
    string result = nDelete(s,i);
    if(isPalindrome(result))
    {
      return true;
    }
    else
    {
      continue;
    }
  }
  return false;
}

int main()
{
  string s ;
  cin>> s;
  if(isPalindromeAfterDeleting(s)){cout<< "TRUE";}
  else{cout<<"FALSE";}
}