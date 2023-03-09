/* Write a program to reverse vector elements */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    vector<int> v;

    int x,s; // x to take inputs from user, s for size of vector.

    cout<<"How many numbers you want to enter : ";

    cin>>s;

    cout<<"Enter "<<s<<" numbers : ";


    for(int i =0; i<s; i++)
    {
        cin>>x;

        v.push_back(x);
    }

    cout<<endl<<"After reverse : ";

    reverse(v.begin(),v.end());

    for(int i = 0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    return 0;
}
