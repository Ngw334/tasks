#include <iostream>
#include <vector>
using namespace std;

/*Taks 3: an array is given , we have to insert the value v at the position of the another value p present in the array ,
where the v and q are taken input from the user*/

int hasIndex(vector <int> v, int p)
{
  for(int i =0; i< v.size(); i++)
  {
    if(v[i] == p){return i;}
    else {continue;}
  }
}

int main()
{
  int p;
  int v;
  vector <int> v1 = {1,2,3,4,5,6,7,8,9};
  
  cout<<"Give a no. that u want to insert : ";
  cin>> v;
  cout<< endl;
  
  cout<<"At which no's position you want to insert : ";
  cin>> p;
  cout<< endl;
  
  vector <int> emptyV;
  int index = hasIndex(v1,p);
  
  for(int j = 0; j< index; j++)
  {
    emptyV.push_back(v1[j]);
  }
  
  emptyV.push_back(v);
  
  for(int i = index; i< v1.size(); i++)
  {
    emptyV.push_back(v1[i]);
  }
  
  for(int z =0; z< emptyV.size();z++)
  {
    cout<< emptyV[z] << "\t";
  }
}
