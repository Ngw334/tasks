#include <iostream>
#include <vector>
using namespace std;

int max(int a,int b)
{
  if(a > b){return a;}
  else{return b;}
}

int main()
{
  int N;
  cout<<"Give the no of elements : ";
  cin>> N;
  
  int length = 0;
  vector <int> arr;
  for(int i = 0; i < N; i++)
  {
    int x; 
    cin>> x;
    arr.push_back(x);
  }
  
  for(int i = 0; i < N - 1; i++)
  {
    if(arr[i] % 2 == 0)
    {
      if(arr[i+1] % 2 != 0)
      {
        length++ ;
      }
    }
    else if(arr[i] % 2 != 0)
    {
      if(arr[i+1] % 2 == 0)
      {
        length++ ;
        
      }
    }
  }
  
  cout<< length + 1;  
}