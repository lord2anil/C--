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
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
int maxWeight;
int n;
vector<int>wt;
int lim;
 vector<vector<int>>dp;
int solve(int mask,int curr){

  
   if(mask==lim){
    return 1;
   }

   if(dp[mask][curr]!=-1){
    return dp[mask][curr];

   }

   if(curr==maxWeight){
    return 1+solve(mask,0);
   }
    // bool p=1;
    int ans=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if((mask&(1<<i))==0){
            // p=0;
            if(curr+wt[i]<=maxWeight){

                ans=min(ans,solve(mask|(1<<i),curr+wt[i]));


            }

        }
    }
    
    if(ans==INT_MAX){
        ans=solve(mask,0)+1;
    }

    return dp[mask][curr]= ans;
}


signed main()
{ 
int n1,m;
cin>>n1>>m;
n=n1;
maxWeight=m;
lim=(1<<n)-1;
int x;
while(cin>>x)
{ wt.push_back(x);}

  dp.resize((1<<(n+1)),vector<int>(maxWeight+1,-1));


put(solve(0,0));



  return 0;}