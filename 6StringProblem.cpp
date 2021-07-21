#include <iostream>
#include <string>
using namespace std;
/*Q6- Count the umber of segments in the given string;
  ex:: 1}input-> "Hello my name is john" /Output -> 5{'Hello', 'my', 'name', 'is', 'john'}
       2} i= "hello" /o = 1{'hello'}
       3} i = "", /o = 0
       4} i = "MY nme: :: , <>"/ o =5{'MY', 'nme:', '::', ',', '<>'}
  */
int noOfSegments(string s)
{
  if(s.size()==0)
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
