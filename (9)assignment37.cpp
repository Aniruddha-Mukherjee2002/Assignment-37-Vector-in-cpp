/* Write a program to Push and print elements in a float vector */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    float x;// x to take inputs from user.

    int s; // s for size of vector.

    vector<float> v;

    cout<<"How many numbers you want to enter : ";

    cin>>s;

    cout<<endl<<"Enter "<<s<<" numbers : ";

    for(int i =0; i<s; i++)
    {
        cin>>x;

        v.push_back(x);
    }

    cout<<endl<<"Elements are : ";

    for(int i =0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }

    return 0;
}
