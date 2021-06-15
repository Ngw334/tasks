#include <iostream>
#include <vector>
using namespace std;
/*Task4: Insert an element in the begining and the end of a given array. */


vector <int> insertBegin(vector <int> v, int x)
{
  vector <int> vNew;
  vNew.push_back(x);
  for(int i = 0; i < v.size(); i++)
  {
    vNew.push_back(v[i]);
  }
  return vNew;
}

vector <int> insertEnd(vector <int> v ,  int y)
{
  vector <int> vNew;
  vNew = v;
  vNew.push_back(y);
  return vNew;
}

int main()
{
  vector <int> v1;
  
  vector <int> v = {1,2,3,4,5,6,7,8,9};
  int x;
  cout<<"Give an element to add at first : ";
  cin>> x;
  cout<< endl;
  
  v1 = insertBegin(v , x);
  for(int i = 0; i< v1.size(); i++)
  {
    cout<< v1[i] << "\t";
  }
  
  cout<< endl;
  vector <int> v2;
  int y;
  cout<<"Give an element to add at end : ";
  cin>> y;
  cout<< endl;
  
  v2 = insertEnd(v,y);
  for(int i = 0; i< v2.size(); i++)
  {
    cout<< v2[i] << "\t";
  }
}
