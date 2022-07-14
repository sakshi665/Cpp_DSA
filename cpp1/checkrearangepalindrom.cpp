#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
//time complexity (t*(n+q*(26+n+26)))
while(t--)
{
int n,q;
cin>>n>>q;
string s;
cin>>s;
while(q--)
{
int l,r;
cin>>l>>r;
int hsh[26];
for(int i=0;i<=26;i++)
{
	hsh[i]==0;
}
l--,r--;
for(int i=l;i<=r;i++)
{
	hsh[s[i]-'a']++;
}
int oddct=0;
for(int i=0;i<26;++i)
{
	if(hsh[i]%2!=0)
	{
		oddct++;
	}
}
if(oddct>1)
{
	cout<<"N0";
}
else
{
	cout<<"Yes";
}
}	
}	
	
}
