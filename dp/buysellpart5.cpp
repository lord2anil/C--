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
     int solve(int i,vector<int>& p,int buy,vector<vector<int>>&dp,int fee){
  if(i==p.size()){
  return 0;
  }
  if(dp[i][buy]!=-1){

    return dp[i][buy];
  }
  int pro=0;
  if(buy){
    int b=-p[i]+solve(i+1,p,0,dp,fee);
    int n=0+solve(i+1,p,1,dp,fee);
    pro=max(b,n);
  }else{
     int b=p[i]-fee+solve(i+1,p,1,dp,fee);
    int n=0+solve(i+1,p,0,dp,fee);
    pro=max(b,n);
  }
  return dp[i][buy]=pro;
}
 int maxProfit(vector<int>& prices ,int fee) {
  int n=prices.size();
vector<vector<int>>dp(n+1,vector<int>(2,-1));
  return solve(0,prices,1,dp,fee);
        
    }
   
};
int main(){

return 0;
}