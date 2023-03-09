/* Write a program to check whether an element exists in a vector or not. */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  int x,s; // x to take integers from user, s is size of vector

  vector<int> v;

  cout<<"How many numbers you want to enter : ";

  cin>>s;

  cout<<"Enter "<<s<<" numbers : ";

  for(int i =0; i<s; i++)
  {
      cin>>x;

      v.push_back(x);
  }

  cout<<endl<<"Enter an element to search : ";

  cin>>x;

 int flag=0;

  for(int i =0; i<v.size(); i++)
  {
      if( v.at(i) == x )
      {
          flag = 1;
          cout<<"Element found : "<<v.at(i)<<endl;
          break;
      }
  }

  if(flag == 0)
    cout<<endl<<"Element not found";

  return 0;

}
