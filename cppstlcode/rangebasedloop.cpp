#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,4,5,6};
    for(int value:v)
    {
        value++;
    }
    for(int value:v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
 //   vector<int> vp={7,8,9,2,1};
    for(int &value:v)
    {
        value++;
    }
    for(int value:v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}