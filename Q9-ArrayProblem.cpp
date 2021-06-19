/*Q9-->
** Given a sorted array of distinct integers.Form a sequence like following:
  a1 >= a2 <= a3 >= a4 <= a5 .... so on..considering the increasing lexicographical order.

**Ex.:: Input--> N = 5, arr[] = {1,2,3,4,5};
      Output--> 2 1 4 3 5
*/

#include <iostream>
#include <vector>
using namespace std;

void swapped(int &a, int&b)
{
  int x = a;
  a = b;
  b = x;
}

int main()
{
   int N;
   cout<< "Give no of elements in array : ";
   cin >> N;
   
   vector <int> initialArray;
   cout<<"Enter the elements in the array : ";
   for(int i = 0; i < N; i++)
   {
     int x;
     cin >> x;
     initialArray.push_back(x);
   } 
   
   for(int i = 1; i < N ; i+= 2)
   {
     if( initialArray[i] >= initialArray[i-1])
     {
       swapped(initialArray[i],initialArray[i-1]);
     }
     else
     {
       continue;
     }
   }
   
   for(int i = 0; i < N; i++)
   {
     cout<< initialArray[i] << " ";
   }
   
}