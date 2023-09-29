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
unordered_set<string>word;
int dp[50005];
int solve(string &s1,int i,string build){

  if(i==s1.size()){

    return word.find(build)!=word.end();
  }
  
  int ans=0;
  build+=s1[i];
  if(word.find(build)!=word.end()){
    ans= (ans+solve(s1,i+1,""))%mod;
  }
  ans=(ans+solve(s1,i+1,build))%mod;
  
  return   ans;
}
signed main()
{ 
string s;
cin>>s;
int m;
cin>>m;
word.clear();

while(m--){
  string s1;
  cin>>s1;
  word.insert(s1);

}
memset(dp,-1,sizeof(dp));
put(solve(s,0,""));
  return 0;}4



