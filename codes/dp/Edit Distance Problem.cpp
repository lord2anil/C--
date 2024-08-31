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
   
   int solve(string s1, string s2,int n,int m,vector<vector<int>>&dp){
       if(n==-1){
        return m+1;
       }
       if(m==-1){
        return n+1;
       }
if(dp[n][m]!=-1){
    return dp[n][m];
}
   if(s1[n]==s2[m]){
    return dp[n][m]=solve(s1,s2,n-1,m-1,dp);
   }
  
   int a=solve(s1,s2,n-1,m-1,dp)+1;
   int b=solve(s1,s2,n,m-1,dp)+1;
   int c=solve(s1,s2,n-1,m,dp);
   dp[n][m]=min(a,min(b,c));
   return dp[n][m];

   }

int solvetab(string s1, string s2,int n,int m){
    vector<vector<int>>dp(n+2,vector<int>(m+2,0));
    for(int i=0; i <n+1; i++){
            dp[0][i] = i;
        }
        
        for(int i=0; i < m+1; i++){
            dp[i][0] = i;
        }


for (int i = 1; i <=n; i++)
{
    /* code */for (int j = 1; j <=m; j++)
    {if(s1[i]==s2[i]){
   dp[i][j]=dp[i+1][j+1];
   }
  else{
   int a=dp[i+1][j+1]+1;
   int b=dp[i+1][j]+1;
   int c=dp[i][j+1]+1;
   dp[i][j]=min(a,min(b,c));}
        
    }
    
    
}
return dp[n][m];


    

}

    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int x=solvetab(word1,word2,n,m);
        return x;
    }
};
int main(){

return 0;
}

// https://leetcode.com/problems/edit-distance/discuss/25846/C%2B%2B-O(n)-space-DP