#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define mod 1000000007
#define mod2 998244353
#define inf 1e18
#define eps 1e-9
using namespace std;
#define int long long
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
//template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
/* oset<int>s:s.find_by_order(k):Kth element in 
,s.order_of_key(k):Number of item strictly lessthan k */
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
vector<char>aa;
vector<vector<int>>dp;
vector<int>vis;
bool solve(vector<int>v,int i,int sum){
  if(i==v.size()){
  return sum==0;
  }
// if(dp[i][sum]!=-1){
//  return dp[i][sum];
// }
  bool ans=0;
    bool p=0;
  ans=ans|solve(v,i+1,(sum+v[i])%101);
  if(!p&&ans&&vis[i]==0){
    p=1;
      aa.push_back('+');
      vis[i]=1;
  }
  ans=ans|solve(v,i+1,(sum-v[i])%101);
  if(!p&&ans&&vis[i]==0){

      vis[i]=1;

                 p=1;     aa.push_back('-');
  }
  ans=ans|solve(v,i+1,(sum*v[i])%101);
     if(!p&&ans&&vis[i]==0){
    p=1;
      vis[i]=1;

    
      aa.push_back('*');
  }
  return dp[i][sum]=ans;
}
signed main()
{ 

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
     #endif
int n;
cin>>n;
vector<int>v;
for (int i = 0; i < n; i++)
{
  /* code */int x;cin>>x;
  v.push_back(x);
}
dp.resize(n+1,vector<int>(103,-1));
vis.resize(n+1,0);
solve(v,1,v[0]);
reverse(aa.begin(),aa.end());
aa.push_back(' ');

for (int i = 0; i < n; i++)
{
  put1(v[i],aa[i]);
}

  return 0;}