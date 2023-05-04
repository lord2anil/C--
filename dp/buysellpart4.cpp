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
    int solve(int i,int buy,vector<int>& p,int l, vector<vector<vector<int>>>&dp){
        if(i==p.size()){
            return 0;
        }
        if(l==0){
            return 0;
        }
        if(dp[i][buy][l]!=-1){
            return dp[i][buy][l];
        }
        int pro =0;
        
        if(buy){
          int  b=-p[i]+solve(i+1,0,p,l,dp);
            int s=solve(i+1,1,p,l,dp);
            pro=max(b,s);
        }
        else{
            int  b=p[i]+solve(i+1,1,p,l-1,dp);
            int s=solve(i+1,0,p,l,dp);
            pro=max(b,s);
        }
        
        return dp[i][buy][l]=pro;
    }
    int solvetab(vector<int>& p,int k){
         int n=p.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(k+2,0)));
        
        
        
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int l=1;l<=k;l++){
                    
                     int pro =0;
        
        if(buy){
          int  b=-p[i]+dp[i+1][0][l];
            int s=dp[i+1][1][l];
            pro=max(b,s);
        }
        else{
            int  b=p[i]+dp[i+1][1][l-1];
            int s=dp[i+1][0][l];
            pro=max(b,s);
        }
            dp[i][buy][l]=pro;         
                    
                }
            }
        }
        
        return dp[0][1][k];
        
        
    }
    
    int maxProfit(int k, vector<int>& p) {
        
        int n=p.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(k+2,-1)));
        return solve(0,1,p,k,dp);
        
        
    }
};
int main(){

return 0;
}