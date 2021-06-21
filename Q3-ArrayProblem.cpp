#include <iostream>
#include <vector>
using namespace std;

/*
  Given an Array A[] of N integers. Find the contiguous subarray of maximum sum.
  Ex: Input:: N = 5, arr[] = {1,2,-3,8,2}
      output:: 10
      Explanation :: that array is {8,2}
      
  */

int max(int a, int b)
{
  if(a>b){return a;}
  else{return b;}
}

int main()
{
  int N;
  cout<<"Give the no of elements : ";
  cin>> N;
  
  vector <int> arr;
  for(int i =0; i < N; i++)
  {
    int x;
    cin>> x;
    arr.push_back(x);
  }  
  
  int currentMax = 0;
  int ansMax = 0;
  
  for(int i = 0; i < N; i++)
  {
    currentMax = max(arr[i], currentMax + arr[i]);
    ansMax = max(ansMax , currentMax);
  }
  cout<< ansMax;
}