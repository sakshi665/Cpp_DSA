#include<iostream>
uing namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==0)
			{
				a[i]=a[i+1];
				cout<<a[i];
				cout<<a[i]+1;
			}
			else if(a[i]==1)
			{
				a[i]<a[i+1];
				cout
			}
			else if(a[i]==2)
			{
				a[i]>a[i+1];
			}
			else
			{
				return 0;
			}
		}
	}
}
