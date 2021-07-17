#include <iostream>
#include <string>
using namespace std;
/*Q6-
  */
int noOfSegments(string s)
{
  if(s == "")
  {
    return 0;
  }
  else
  {
    int result = 0;
    for(int j = 0; j < s.size(); j++)
    {
      char ch = s[j];
      if(ch == ' ')
      {
        result++;
        continue;
      }
      else { continue;}
    }
    return result + 1;
  }
  
}

int main()
{
  string s;
  cout<< "Give the string to find the no of segments : \n";
  getline(cin,s);
  int result = noOfSegments(s);
  cout<< result; 
}