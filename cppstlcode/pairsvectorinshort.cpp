#include<bits/stdc++.h>
using namespace std;
int main()
 {
    vector <pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    for(pair<int,int> &value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
// }

//auto iterator

vector<int> v={2,3,4,5};
for(auto it=v.begin();it!=v.end();it++)
{
cout<<(*it)<<" ";
}
cout<<endl;
//  }

vector<pair<int,int>> vp={{1,2},{3,4},{5,6}};
for(auto &value:vp)
{
    cout<<value.first<<" "<<value.second<<endl;
}
 }