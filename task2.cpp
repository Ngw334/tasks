#include <iostream>
#include <vector>
using namespace std;

/*Task2: Create an array of marks and find the total marks by taking the size of the array as an input form user. */

int main()
{
  int n;
  cout<<"Give size of array : ";
  cin>> n;
  
  int result = 0;
  
  vector <int> array(n);
  
  for(int j = 1; j <= n; j++)
  {
    cout<< "Give the"<< j <<"th elements : ";
    cin>> array[j];
    result += array[j];
  }
       
  cout<<"Total marks : "<< result;
}
