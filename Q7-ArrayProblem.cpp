#include <iostream>
#include <vector>
using namespace std;

/*
  Given an arry of N integers including 0 as an element. 
  Task is to find the smallest missing positive integer in the array.
  Ex:: Input: a[]={0,2,3,4,6,8}
       Output: 1
  */


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
  
 for(int i = 0; i < N ; i++)
 {
   if(arr[i+1] - arr[i] == 1)
   {
     cout<< arr[N-1] +1;
     break;
   }
   else if(arr[i+1] - arr[i] > 1)
   {
     cout<< arr[i] + 1;
     break;
   }
 }
 cout<< " is the smallest missing positive integer.\n";
   
}