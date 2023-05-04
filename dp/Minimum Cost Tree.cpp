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
    
    
    int solve(int l,int r,vector<int>&v,map<pair<int,int>,int> &maxi,vector<vector<int>>&dp){
        if(l==r){
            return 0;
        }
        if(dp[l][r]!=-1){
            return dp[l][r];
        }
        int ans=INT_MAX;
        for(int i=l;i<r;i++){
            ans=min(ans,maxi[{l,i}]*maxi[{i+1,r}]+solve(l,i,v,maxi,dp)+solve(i+1,r,v,maxi,dp));
        }
        return dp[l][r]=ans;
    }
    int mctFromLeafValues(vector<int>& arr) {
        int n=arr.size();
        map<pair<int,int>,int> maxi;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        for(int i=0;i<n;i++){
            maxi[{i,i}]=arr[i];
            for(int j=i+1;j<n;j++){
                maxi[{i,j}]=max(arr[j],maxi[{i,j-1}]);
            }
        }
        return solve(0,n-1,arr,maxi,dp);
        
    }
};
int main(){

return 0;
}