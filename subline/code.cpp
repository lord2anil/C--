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
const int mxzlog=36;
const int ssz=1e6+5;
int child[ssz][mxzlog];

bool check(int x,int y,int mid){
  

    if(x==y){
      return 1;
    }


   while(mid>0){
    int d=log2(mid);
    x=child[x][d];
    if(x==y){
      return 1;
    }
    mid=mid-(1<<d);
   }

   return x==y;

}

signed main()
{ 

  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
   #endif
int n,q;
cin>>n>>q;
vector<int>pp(n+1,1);






for (int i = 1; i <=n; i++)
{
  /* code */int x;cin>>x;
  pp[i]=x;
  child[i][0]=x;
}
vector<pair<int,int>>query;
while (q--)
{
  /* code */int a,b;
  cin>>a>>b;
  query.push_back({a,b});
}


for (int i =1; i <=34; i++)
{
  for (int k = 1; k <=n; k++)
  {
   child[k][i]=child[child[k][i-1]][i-1];
  }
  
}

for(auto &[x,y]:query)
{

int l=0;
int r=n+2;
int ans=-1;
if(x==y){
      put(0);
    }else{
while(l<=r){
  int mid=(l+r)/2;
  if(check(x,y,mid)){
    ans=mid;
    r=mid-1;
  }else{
    l=mid+1;
  }
}

put(ans);}

}




  return 0;}