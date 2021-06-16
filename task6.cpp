#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <int> vFinal;
  vector <int> v1 = {1,2,3,4,5};
  vector <int> v2 ={6,7,8,9};
  
  for(int i =0; i < v1.size(); i++)
  {
    vFinal.push_back(v1[i]);
  }
  
  for(int j = 0; j < v2.size(); j++)
  {
    vFinal.push_back(v2[j]);
  }
  
  for(int k =0; k < vFinal.size(); k++)
  {
    cout<< vFinal[k] << "\t";
  }
}