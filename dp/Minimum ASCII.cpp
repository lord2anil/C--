#include<bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::pair;
using std::array;
#include <algorithm>
#include <functional>
#define ll long long int

class Solution {
public:
   
   int solve(const string& s1, const string &s2,int n,int m,vector<vector<int>>&dp){
      if(n==-1){
        int ans=0;
        for (int i = 0; i <=m; i++)
        {
         ans+=int(s2[i]);
        }
        return ans;
        
      }
      if(m==-1){
        int ans=0;
        for (int i = 0; i <=n; i++)
        {
         ans+=int(s1[i]);
        }
        return ans;
        
      }
   if(dp[n][m]!=-1){
    return dp[n][m];
   }
   if(s1[n]==s2[m]){
    return dp[n][m]=solve(s1,s2,n-1,m-1,dp);
   }
     

     return dp[n][m]= min(solve(s1,s2,n-1,m,dp)+s1[n],solve(s1,s2,n,m-1,dp)+s2[m]);





   }



    int minimumDeleteSum(const string& s1, const string &s2) {
        int n=s1.length();

        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(s1,s2,n-1,m-1,dp);

    }
};



int main(){
cout<<int('a');
return 0;
}