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
int main(){

return 0;
}


class Solution {
public:
    bool solve(const string &s,const string &p,int i ,int j,  vector<vector<int>>&dp){
        if(i<0 && j<0){
            return 1 ;
            
        }
        
        if(i>=0&&j<0){
            return 0;
        }
        if(i<0&&j>=0){
            for(int k=0;k<=j;k++){
                if(p[k]!='*'){
                    return 0;
                }
            }
            return 1;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i]==p[j]||p[j]=='?'){
        return dp[i][j]=solve(s,p,i-1,j-1,dp);}
    else if(p[j]=='*'){
      return dp[i][j]=solve(s,p,i,j-1,dp)||solve(s,p,i-1,j,dp);
}else{
   return dp[i][j]=0;
}
    
}
    
    bool isMatch(const string &s,const string &p) {
        vector<vector<int>>dp(s.length()+1,vector<int>(p.length()+1,-1));
        return solve(s,p,s.length()-1,p.length()-1,dp);
        
    }
};