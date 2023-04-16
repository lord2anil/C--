#include<bits/stdc++.h>

using namespace std;
int main(){
int n;
cin>>n;
vector<int>a(n);
for (int i = 0; i < n; i++)
{
    /* code */cin>>a[i];
}
int mx=0;
int cur=0;
for (int i = 0; i < n; i++)
{
    /* code */cur+=a[i];
    mx=max(cur,mx);bi
    if(cur<0){
        cur=0;
    }
}
cout<<mx;




return 0;
}