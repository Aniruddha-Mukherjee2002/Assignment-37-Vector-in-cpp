/* Declare a vector without initialization, insert some elements and print */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);

    v.push_back(2);

    cout<<v[0]<<" "<<v[1];

    return 0;

}
