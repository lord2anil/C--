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
vector<int>adj[1002];
int vis[1002];
int dis[1002];

    void dfs(int v, int d){
        vis[v]=1;
          dis[v]=d;
        for(auto &i : adj[v])
        {
          if(vis[i]==0){
            dfs(i,d+1);
          }
        
        }
    }



signed main()
{ 
int n;
cin>>n;
int m=n-1;
while(m--){
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
vector<int>girl;
int x;
while(cin>>x){
    girl.push_back(x);
}
dfs(1,0);
int ans=2003;
int sol;
sort(girl.begin(),girl.end());
reverse(girl.begin(),girl.end());


for(auto &i : girl)
{
    if(dis[i]<=ans){
        sol=i;
        ans=dis[i];
    }
   
}
put(sol);
  return 0;}