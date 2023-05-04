#include <bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::array;
using std::pair;
#include <algorithm>
#include <functional>
#define ll long long int


// You are given an array of ‘N’ distinct integers and an integer ‘X’ representing the target sum. You have to tell the minimum number of elements you have to take to reach the target sum ‘X’.



    int rec(vector<int> &num, int x,vector<int>&dp)
    {
        if (x == 0)
        {
            return 0;
        }
        if (x < 0)
        {
            return INT16_MIN;
        }
        if(dp[x]!=-1){
            return dp[x];
        }
        int mini;
        for (int i = 1; i < num.size(); i++)
        {
            int ans = rec(num, x - num[i],dp);
            if (ans != INT16_MIN)
            {
                mini = min(mini,ans + 1);
            }
        }

        return dp[x]=mini;
    }

    int minimumElements(vector<int> &num, int x)
    {

        vector<int>dp(x+1,-1);
        int ans = rec(num, x,dp);
        if (ans == INT16_MIN)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }



int main()
{
    vector<int>num={1,2,3};
    int x=6;
    // for (int i = 0; i < 100; i++)
    // {dp[i]=-1;
    // }
    
    // dp[0]=0;
    cout<<minimumElements(num,6);



vector<int>dp(x+1,INT_MAX);
dp[0]=0;

for (int i = 1; i <=x; i++)
{
    for (int j = 0; j < num.size(); j++)
    {
       if(x-num[i]>0&&dp[i]!=INT_MAX){
        dp[i]=min(dp[i],1+dp[i-num[j]]);
       }
    
}
}

    


    return 0;
}