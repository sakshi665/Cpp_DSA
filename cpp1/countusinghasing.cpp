/*
Given array a of N integer .Given Q queries
and in each query given a number x,print 
count of the number in array.

constrains
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5

*/

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
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		int ct=0;
		for(int i=0;i<n;i++)
		if(a[i]==x)
		{
			ct++;
		}
		cout<<ct;
	}
}
//time complexity:-o(n)+o(q*n)=o(n^2)=10^10;
//so it is alot......

