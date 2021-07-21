#include <iostream>
#include <vector>
using namespace std;
/*Q- Given a string licencePlat and an array of strings  words, find the shortest 
completing word in words.
A completing word is a word that contain all the letters in licencePlate. Ignore
spaces in licencePlate, and treat letters as case insensitive , if a letter appears
more than once in licencePlate , then it must appear in the word the same number of times
or more. 
for ex.: if licencePlate  = "abc 12c" then it contains letters 'a', 'b'(ignoring
cases) and 'c' twice. Possible completing words are "abccdef", "caaacab" and
"cabc".
Return the shortest completing word in words. It is guaranteed an answer exists.
If there are multiple shortest completing words, return the first one thatt occurs in words.
*/

//to remove the spaces and numbers in the string
string removespaces(string a)
{
  string result ="";
  for(int i = 0; i < a.size(); i++)
  {
    if(isalpha(a[i]))
    {
      result.push_back(a[i]);
      continue;
    }  
    else
    {
      continue;
    }
  }
  return result;
}

// to make it case insensitive by converting it into lower case
string upper_to_lower(string a)
{
  a = removespaces(a);
  for(int i = 0; i < a.size(); i++)
  {
    if(a[i] >= 'A' && a[i] <= 'Z')
    {
      a[i] = a[i] + 32;
      continue;
    }
    else
    {
      continue;
    }
  }
  return a;
}

// to delete the character to from the licence plate no
string deletechar(string a, int n)
{
  string result ="";
  for(int i = 0; i < n; i++)
  {
    result.push_back(a[i]);
  }
  for(int i = n+1; i < a.size(); i++)
  {
    result.push_back(a[i]);
  }
  return result;
}

//comparing the common elements to find with each string element of string
bool hasElement(string a , string b)
{
  if(a.size() < b.size()){return false;}
  for(int i = 0; i < a.size(); i++)
  {
    for( int j = 0; j < b.size(); j++)
    {
      if(a[i] == b[j])
      {
        b = deletechar(b,j);
        break;
      }
      else
      {
        continue;
      }
    }
  }
  if(b.size() == 0){return true;}
  return false;
}

// swapping two elements
void swapped(string &a, string &b)
{
  string a1 = a;
  a = b;
  b = a1; 
}

//sorting the elements of the vector in order of their sizes
vector <string> sortstring(vector <string> a)
{
  for(int i = 0; i < a.size(); i++)
  {
    if(a[i].size() > a[i+1].size())
    {
      swapped(a[i],a[i+1]);
      continue;
    }
    else
    {
      for(int j = 1; j < a.size() ; j++)
      {
        if(a[j].size() > a[j+1].size())
        {
          i = j - 1;
          break;
        }
        else
        {
          continue;
        }
      }
    }
  }
  return a;
}


// final phase
string returnResult(vector <string> a, string b)
{
  vector <string> similar;
  for(int i = 0; i < a.size(); i++)
  {
    if(hasElement(a[i],b))
    {
      similar.push_back(a[i]);
      continue;
    }
    else
    {
      continue;
    }
  }
  similar = sortstring(similar);
  return similar[0];
}

int main()
{
  string licencePlate;
  cout<< "Give the licence plate no. : ";
  getline(cin, licencePlate);
  cout<< endl;
  licencePlate = upper_to_lower(licencePlate);
  
  
  int N;
  cout<< "Give the no of elements in an works. : ";
  cin>> N;
  vector <string> words = {};
  for(int i = 0; i < N; i++)
  {
    string c;
    cin>> c;
    words.push_back(c);
  }
  
  cout<< returnResult(words,licencePlate);
    
}
