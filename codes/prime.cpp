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
signed main()
{ 
int n;
cin>>n;
vector<int>prime;

for (int i = 2; i*i<=n; i++)
{
    while(n%i==0){
        prime.push_back(i);
        n=n/i;
    }
    
}

if(n>1){
    prime.push_back(n);
}
for(auto &i : prime)
{
put(i);
}
  return 0;}