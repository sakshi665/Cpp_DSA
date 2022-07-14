/*
Given 2d array a of N*N integers,Given Q queries in each quer
given a,b,c and d print sum of squre represented by (a,b) as top left point 
and (c,d)as top bottom up right point

constrains
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int ar[N][N];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>ar[i][j];
		}
	}
	
	int q;
	cin>>q;
	while(q--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		long long sum=0;
		for(int i=a;i<=c;++i)
		{
			for(int j=b;j<=d;++j)
			{
				sum =sum+ar[i][j];
			}
		}
		cout<<sum<<endl;
	}
}
//time complexity:O(N^2)+O(Q*N^2)=10^5*10^6=10^11
