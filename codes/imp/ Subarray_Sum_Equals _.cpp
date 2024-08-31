#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a;i>=b;i--)
#define trav(a,x) for(auto &a:x)
#define fi first
#define se second
#define mod 1000000007
#define mod2 998244353
#define inf 1e18
#define eps 1e-9
using namespace std;
#define int long long
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int n=nums.size();
         int ans=0;
         map<int,int>mp;
         int sum=0;
         for (int i = 0; i < n; i++)
         {sum+=nums[i];
          int x=sum-k;

          if(mp.find(x)!=mp.end()){
            ans+=mp[x];
          }
          mp[sum]++;
         
         }
         
         
        
        return ans;
        
    }
};
signed main()
{ 
int n;
  return 0;}