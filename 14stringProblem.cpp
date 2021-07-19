#include <iostream>
#include <string>
using namespace std;
/*Q- string s contains unique characters which are jwells. Find the no. of jwells in the other string by comparing the string 
with each other.Input is case sensitve. 
*/

int noOfJwells(string a, string b)
{
  int count = 0;
  for(int i = 0; i < a.size(); i++)
  {
    for(int j = 0; j < b.size(); j++)
    {
      if(a[i] == b[j])
      {
        count++;
        continue;
      }
      else
      {
        continue;
      }
    }
  }
  return count;
}

int main()
{
  string jwell;
  cout<< "Jwell = ";
  cin >> jwell;
  cout<< endl;
  string stones;
  cout<< "Stones = ";
  cin>> stones;
  cout<< endl;
  
  cout<< noOfJwells(jwell, stones);   
}
