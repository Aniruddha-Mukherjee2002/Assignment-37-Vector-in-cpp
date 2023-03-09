/* Find largest and smallest elements in a vector */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  vector<int> v;

  int s,x; // s for size, x for user input.

  cout<<"How many numbers you want to enter: ";
  cin>>s;

  cout<<"Enter "<<s<<" numbers : ";

  for(int i = 0; i<s; i++)
  {
      cin>>x;

      v.push_back(x);
  }

  sort(v.begin(),v.end());

  cout<<"Largest element in the Vector is : "<<v.back()<<endl;
  cout<<"Smallest element in the array is : "<<v.front()<<endl;

  return 0;
}
