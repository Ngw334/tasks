#include <iostream>
#include <vector>
using namespace std;

/*
 You are given an array of N size. Find the maximum possible subarray such that its elements are arranged alternately 
 either even and odd or odd and even.
 Ex:: Input : a[] = {10,14,12,7,8}
      Output : 3 
      Explanation : That subarray is {12,7,8}.
*/

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
