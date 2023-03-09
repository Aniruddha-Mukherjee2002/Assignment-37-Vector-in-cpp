/* Write a program to find common elements between two vectors. */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  int x,s; // x for to take numbers from user and s for size of vector.
  vector<int> v;
  cout<<" How many numbers you want to enter :  ";
  cin>>s;
  cout<<"Enter "<<s<<" numbers : ";
  for(int i =0; i<s; i++)
  {
      cin>>x;
      v.push_back(x);
  }

  vector<int> v1;
  cout<<"Enter "<<s<<" numbers : ";
  for(int i =0; i<s; i++)
  {
      cin>>x;
      v1.push_back(x);
  }

  cout<<"\ncommon elements are : "<<endl;
  for(int i = 0; i<v.size(); i++)
  {
      if(v[i]==v1[i])
        cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}
