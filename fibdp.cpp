#include<bits/stdc++.h>

using namespace std;
#define N 2000

int dp[N];

  int fib(int n){

      if (n==0)
      {
          /* code */return 0;
      }
      if (n==1)
      {
          /* code */return 0;
      }
      if (n==2)
      {
          /* code */return 1;
      }
if(dp[n]!=-1){
    return dp[n];
}
      dp[n]= fib(n-1)+fib(n-2);

      return dp[n];

    

  }
int main(){

    for (int i = 0; i < N; i++)
    {
        /* code */dp[i]=-1;
    }
    

return 0;
}