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

      int solve(string s,int n, int m, vector<vector<int>>&dp){
        if(n>m){
            return 0;
        }
        if(m==n){
            return 1;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(s[n]==s[m]){
            return dp[n][m] =solve(s,n+1,m-1,dp)+2;
        }
        int a=solve(s,n+1,m,dp);
        int b=solve(s,n,m-1,dp);
        return dp[n][m]=max(a,b);
      }


    int longestPalindromeSubseq(string s) {

int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
return solve(s,0,n-1,dp);
        
    }
};
int main(){

return 0;
}