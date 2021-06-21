#include <iostream>
#include <vector>
using namespace std;

/*
  Given an array A[] of N positive integers.
  Task is to find the maximum of j-i subjected 
  to the constraints of A[i] <= A[j].
  Ex:: Input : A[] ={1,10},N=2
       Output: 1
       Explanation:: a[0]<=a[1] hence, j-i = 1
  */

int max(int a, int b)
{
  if(a > b){return a;}
  else{return b;}
}

int main()
{
  int N;
  cout<<"Give the no of elements in the array : ";
  cin>> N;
  
  vector <int> arr;
  cout<<"Enter the elements : ";
  for(int i = 0; i < N; i++)
  {
    int x;
    cin>> x;
    arr.push_back(x);
  }
  
  
  int result = 0;
  for(int i = 0; i<N; i++)
  {
    for(int j = 0; j<N ; j++)
    {
      if(arr[i] <= arr[j])
      {
        result = max(result , j -i);
      }
    }
  }
  cout<< result;
   
}