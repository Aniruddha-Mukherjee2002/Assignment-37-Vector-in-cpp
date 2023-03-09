/* Write a program to Copy one vector’s elements to another vector. */

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"How many numbbers you want to enter : ";
    int S,x;
    cin>>S;
    cout<<"Enter "<<S<<" numbers:";
    for(int i =0; i<S; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    vector<int> v2;
    v2.assign(v.begin(),v.end());
     cout<<endl<<"After Copy"<<endl;
     for(int i =0;i<v2.size(); i++)
        cout<<v2[i]<<" ";

        return 0;
}
