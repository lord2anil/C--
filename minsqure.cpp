#include<bits/stdc++.h>
using std:: min;
#define N 10000
#define MOD 100000000


int dp[N];


int min2(int n){
    if (n==0 ||n==1||n==2||n==3)
    {
        /* code */return n;
    }

if (dp[n]!=MOD)
{
    /* code */return dp[n];
}

    for (int i = 1; i*i <= n; i++)
    {
       dp[n]=min(dp[n],(min2(n-i*i)+1));
    }
    
    return dp[n];
    



}
using namespace std;
int main(){


    for (int i = 0; i < N; i++)
    {
        /* code */dp[i]=MOD;
    }
    
    cout<<min2(4);

return 0;
}