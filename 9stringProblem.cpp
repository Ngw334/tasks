#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*Q9- Given a string s, reverse the order of characters in each word within a sentence while
      still preserving the whitespaces and initial word order.
  */

vector <int> whitespaceIndex(string s)
{
  vector <int> index = {0};
  for(int i = 0; i < s.size()-1; i++)
  {
    if(s[i] == ' ')
    {
      index.push_back(i-1);
      index.push_back(i+1);
      continue;
    }
    else{continue;}
  }
  index.push_back(s.size()-1);
  return index;
}

string reverse(string s, int x, int y)
{
    string result = "";
    for(int i = y; i >= x; i--)
    {
        result.push_back(s[i]);
    }
    return result;
}

string answer(string s)
{
  string result = "";
  vector <int> index = whitespaceIndex(s);
  for(int i = 0; i < index.size(); i += 2)
  {
    string x = reverse(s,index[i],index[i+1]);
    for(int j = 0; j < x.size(); j++)
    {
      result.push_back(x[j]);      
    }
    result.push_back(' ');
  }
  return result;
}

int main()
{
  string s ;
  cout<< "give the string : ";
  getline(cin,s);
  cout<< answer(s);
  
  cout<< endl;
}
