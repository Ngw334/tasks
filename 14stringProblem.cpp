#include <iostream>
using namespace std;

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