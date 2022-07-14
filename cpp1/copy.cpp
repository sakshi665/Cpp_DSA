#include<bits/stdc++.h>

using namespace std;

const int N=10e5+10;

int door_key_avl[N];

int main()

{

int m,n;

cin>>m>>n;

while(m--)

{

int key,lock;

cin>>key>>lock;

door_key_avl[lock]=1;

 

}

int temp;

bool open=true;

for(int i=1;i<=n;i++)

{

cin>>temp;

if(door_key_avl[temp]==0)

{

open=false;

//break;

}
}

if(open)

cout<<"YES"<<endl;

else

cout<<"NO"<<endl;

}
