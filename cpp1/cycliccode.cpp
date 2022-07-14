#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	int ans[n];
	for(int i=0;i<k;i++)
	{
	ans[i]=a[n-k+i];
    }
int c=0;
for(int i=k;i<n;i++)
{
	ans[i]=a[c++];
}
for(int i=0;i<n;i++)
{
cout<<ans[i]<<" ";
}
}
