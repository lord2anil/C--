#include <bits/stdc++.h>

using namespace std;
const int N = 100;
int dp[N];
int lis(vector<int> &v,int n){
    if (dp[n]!=-1)
    {
        /* code */return dp[n];
    }
    dp[n]=1;

  for (int i = 0; i < n; i++)
  {
      /* code */if (v[n]>v[i])
      {
          /* code */dp[n]=max(dp[n],1+lis(v,i));
      }
      
  }
  return dp[n];
  
}


int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> v[i];
    }
for (int i = 0; i < n; i++)
{
    /* code *
    
        /* code */dp[i]=-1;
    
    
}

cout<<lis(v,n-1);

    return 0;
}