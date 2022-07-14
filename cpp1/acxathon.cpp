#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	int a[k];
	int i,j;
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
    for(i=0;i<k;i++)
    {
    	for(j=i+1;j<k;j++)
    	{
    		if(j%i==0)
    		{
    			if(a[i]==a[j])
    			{
    				return 0;
				}
			}
		}
	}
	return 1;
}
