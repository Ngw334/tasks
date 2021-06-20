#include <iostream>
#include <vector>
using namespace std;

/*
  Given an array A of n integers. Task is to find the first equilibrium point in the array.
  Equilibrium point in an array is such position that the sum of the elements before the position
  and after that position is the same.
  Ex:: Input:: N = 5; A[] = {7,8,5,9,6}
       Output:: 5 is the equilibrium point.
       as 7 + 8 <-5-> 9 + 6,,, The sum on both sides is the same. i.e. 15.
  */

int sum(int arr[], int a, int b)
{
  int sum = 0;
  for(int i =a; i<= b; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int N;
  cout<<"Give the no of elements in the array : ";
  cin>> N;
  
  int arr[N];
  cout<<"Enter the elements : ";
  for(int i = 0; i < N; i++)
  {
    cin>> arr[i];
  }
  
  if(N == 1){cout << arr[0] << " is the only element present in the array.";}
  else if( N == 2){cout << "NO equilibrium points.";}
  else
  {
    for(int i = 0; i < N; i++)
    {
      if((sum(arr,0, i-1)) == (sum(arr,i+1,N-1)))
      {
        cout << arr[i] << " is the equilibrium point.";
      }
    }
  } 
}