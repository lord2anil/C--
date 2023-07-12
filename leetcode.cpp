#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}

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
int dp[n+2][2];
dp[n+1][0]=dp[n+1][1]=1;

for (int i = n; i >=2; i--)
{
   int op1=dp[i+1][0];
   int op2=(dp[i+1][0]+dp[i+1][1])%MOD;
   int op3=(2*dp[i+1][0])%MOD;
   int op4=dp[i+1][1];
   dp[i][0]=((op1+op2)%MOD+op3)%MOD;
   dp[i][1]=(op4+op2)%MOD;
}


put((dp[2][0]+dp[2][1])%MOD);


}
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
  int T;
 
  cin>>T;
 
  while (T--)
  { fuck(); }
  // cout<<fixed<<setprecision(10);
  // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<" ms\n";
  return 0;}