#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    {
        return false;
    }
    else if(n==2)
    {
        return true;
    }
    else if(n%2==0)
    {
        return false;
    }
    else 
    {
        for(int i=3;i<n/2;i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int l;
    int u;
    cin>>l>>u;
    for(int i=l;i<=u;i++)
    {
    if(isprime(i))
    {
       cout<<i<<" ";
    }
    }
    return 0;
}