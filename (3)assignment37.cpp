/* Write a function to print the element of a vector and take input from the user. */

#include<iostream>
#include<vector>

using namespace std;

void Take_and_Display()
{
     int s,x; // s for size, x for taking inputs from user.

    vector<int> v;

    cout<<"How many numbers you want to enter : ";

    cin>>s;

    cout<<"Enter "<<s<<" numbers :";

    for( int i = 0; i < s; i++ )
    {
        cin>>x;
        v.push_back(x);
    }
    system("cls");
    cout<<endl<<"Elements are : ";

  for(int i =0;i<v.size(); i++)
        cout<<v[i]<<",";

        cout<<endl;

        //cout<<endl<<"capacity = "<<v.capacity();
}

int main()
{

        Take_and_Display();

        return 0;
}
