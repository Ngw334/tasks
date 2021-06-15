#include <iostream>
#include <vector>
using namespace std;
/*Task5 : Delete an element v from a its position in the array. */
int hasIndex(vector <int> v , int x)
{
  for(int i = 0; i < v.size() ; i++)
  {
    if(v[i] == x){return i ;}
    else {continue;}
  }
}

vector <int> deleteElement(vector <int> v, int x)
{
  vector <int> vNew;
  int index = hasIndex(v,x);
  for(int i = 0; i < index; i++)
  {
    vNew.push_back(v[i]);
  }
  
  for(int i = index +1 ; i < v.size(); i++)
  {
    vNew.push_back(v[i]);
  }
  return vNew;
}

int main()
{
  int x;
  vector <int> v = {1,2,3,4,5,6,7,8,9};
  cout<< "Give an element which you want to delete : ";
  cin>> x;
  cout<< endl;
  
  vector <int> v1;
  v1 = deleteElement(v, x);
  for(int i = 0; i< v1.size(); i++)
  {
    cout<< v1[i] << "\t";
  }  
}
