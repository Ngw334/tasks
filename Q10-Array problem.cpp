/*Q10-->
** Given an unsorted array arr[] of N elements,, task is to rotate the array elements by 
  D elements in the counter clockwise direction.

**Ex.:: Input--> N = 5, D = 2; arr[] = {1,2,3,4,5};
      Output--> 3 4 5 1 2
*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
   int N;
   cout<< "Give no of elements in array : ";
   cin >> N;
   
   int D;
   cout<<"Give the elements by which it is to be rotated : ";
   cin>> D;
   
   vector <int> initialArray;
   cout<<"Give the elements in the array : ";
   for(int i = 0; i < N; i++)
   {
     int x;
     cin >> x;
     initialArray.push_back(x);
   } 
   
   vector <int> finalResult;
   for(int i = D; i < N ; i++)
   {
     finalResult.push_back(initialArray[i]);
   }
   
   for(int j = 0; j < D; j++)
   {
     finalResult.push_back(initialArray[j]);
   }
   
   for(int i = 0; i < finalResult.size(); i++)
   {
     cout<< finalResult[i] << " ";
   }
}
