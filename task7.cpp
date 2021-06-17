#include <iostream>
#include <vector>
using namespace std;

/*Task7 : Merge the two arrays in a sorted way. */

vector <int> mergedArray(vector <int> v1, vector <int> v2)
{
  vector <int> vFinal;
  for(int i = 0; i < v1.size(); i++)
  {
    vFinal.push_back(v1[i]);
  }
  for(int i = 0; i < v2.size(); i++)
  {
    vFinal.push_back(v2[i]);
  }
  return vFinal;
}

void swap(int * a, int * b)
{
  *a = *b;
  *b = *a;
} 

vector <int> sortedArray(vector <int> v1, vector <int> v2)
{
  vector <int> vMerged = mergedArray(v1,v2);
  
  for(int i = 0; i < (vMerged.size() - 1); i++)
  {
    if(vMerged[i] > vMerged[i+1])
    {
      swap(vMerged[i], vMerged[i+1]);
    }
    for(int j = 0; j< vMerged.size(); j++)
    {
      if(vMerged[j] > vMerged[j+1])
      {
        i = j - 1;
        break;
      }
    }
  }
  
  return vMerged;
}

int main()
{
   vector <int> a ={1,6,9};
   vector <int> b = {3,2,8,10};
   vector <int> answer;
   
   answer = sortedArray(a,b);
   
   for(int z = 0; z < answer.size(); z++)
   {
     cout<< answer[z] <<" ";
   } 
}
