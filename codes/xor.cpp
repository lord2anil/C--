#include<bits/stdc++.h>

using namespace std;
int main(){


// int a=4;
// int b=6;
// a=a^b;
// b=a^b;
// a=a^b;
// cout<<a;

int a[5];
int ans=0;
for (int i = 0; i < 5; i++)
{
    /* code */cin>>a[i];
    ans= ans^a[i];
}
cout<<ans;



return 0;
}