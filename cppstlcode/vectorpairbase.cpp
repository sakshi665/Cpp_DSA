
#include<bits/stdc++.h>
using namespace std;
void printvec(vector <int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
int N;
cin>>N;
vector<int> v[N];
for(int i=0;i<N;i++)
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        int x;
        cin>>x;
        v[i].push_back(x);
    }
}
for(int i=0;i<N;i++)
{
    printvec(v[i]);
}

}


/*
3
3
1 2 3
3
3 4 5
2 
1 2
*/