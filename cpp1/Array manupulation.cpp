#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int ar[N];
int main()
{
/*5 3
1 2 100
2 5 100
3 4 100*/
int n,q;
cin>>n>>q;
int a,b,k;
while(q--)
{
	cin>>a>>b>>k;
	for(int i=a;i<=b;++i)
	{
     ar[i]+=k;
	}
} 
long long mx=-1;
for(int i=1;i<=n;i++)
{
	if(mx<ar[i])
	{
		mx=ar[i];
	}
}
cout<<mx;
}
//o(q*n+n)=2*10^5*10^7
