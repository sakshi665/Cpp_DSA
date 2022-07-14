#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
   // map<int,string> ::iterator it;
    //for(auto it = m.begin();it!=m.end();++it)
    //m.erase(3);
    m.find(3);
    //m.clear();
    for(auto pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}