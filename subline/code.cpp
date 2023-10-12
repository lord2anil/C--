#include<bits/stdc++.h>
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
/*----------------------Graph Moves----------------*/
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
// int dx[8]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// int dy[8]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// int dx[8]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//  int dy[8]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/
const int MOD = 1e9 + 7;
// unsigned int NO_OF_BITS= sizeof(n) * 8;
void fuck(){

int n;
cin>>n;
double a[n];
double sum=0;
for (int i = 0; i < n; ++i)
{
  /* code */cin>>a[i];
  sum+=a[i];}




sort(a,a+n);


if(n==5){
  double a1=(-a[0]+a[2])/2;
  double b=(-a[2]+a[4])/2;
  if(a1<b){
    double ans1=(a[n-1]+a[n-2])/2-(a[0]+a[2])/2;
    cout<<setprecision(6)<<ans1<<endl;
    return;

  }
else{
    double ans1=(a[n-1]+a[n-3])/2-(a[0]+a[1])/2;
    cout<<setprecision(6)<<ans1<<endl;
    return;

}

  
}
double x1=(a[n-1]+a[n-2])/2;
sum=sum-(a[n-1]+a[n-2]);
double x2=(a[0]+a[1])/2;
double ans=x1-x2;
cout<<setprecision(6)<<ans<<endl;


}
signed main()
{// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
  int T;
  int t;
  cin>>T;
  t = T;
  while (T--)
  { 
    cout << "Case #" << abs(T-t) << ": ";
    fuck(); }
  // cout<<fixed<<setprecision(10);
  // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<" ms\n";
  return 0;}
