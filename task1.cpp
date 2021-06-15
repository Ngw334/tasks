#include <iostream>
#include <vector>
using namespace std;

int square(int n)
{
  return n * n;
}


int main()
{
  int n;
  cout<<"Give size of array : ";
  cin>> n;
  
  vector <int> array(n);
  
  for(int j = 1; j <= n; j++)
  {
    cout<< "Give the"<< j <<"th elements : ";
    cin>> array[j];
  }    
  
  for(int i = 1; i <= n; i++)
  {
    cout<< square(array[i])<< "\t";
  }
 
}