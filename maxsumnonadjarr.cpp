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

int  maxsum(vector<int> &nums,vector<int> &dp,int i){
   if(i<0){
    return 0;
   }
   if(i==0){
    return nums[0];
   }
    if(dp[i]!=-1){
        return dp[i];
    }

    dp[i]=max(maxsum(nums,dp,i-1),maxsum(nums,dp,i-2)+nums[i]);
return dp[i];

}

int maximumNonAdjacentSum(vector<int> &nums){

int n=nums.size();
vector<int>dp(nums.size()+1,-1);
 return maxsum(nums,dp,n-1);
// return dp[nums.size()-1];


}






















int main(){

return 0;
}