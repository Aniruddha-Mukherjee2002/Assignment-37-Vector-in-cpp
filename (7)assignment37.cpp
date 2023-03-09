/* Write a program to find sum of vector elements */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int x,sum=0;
    cout<<"Enter 5 elements : ";
    for(int i= 0; i<5; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(int i =0; i<v.size(); i++)
    {
        sum+=v.at(i);
    }
    cout<<"\nSum of all elements in the Vector is : "<<sum<<endl;

    return 0;
}
