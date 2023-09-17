#include <bits/stdc++.h>
using namespace std;
#define int long long
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
// template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
// /* oset<int>s:s.find_by_order(k):Kth element in
// ,s.order_of_key(k):Number of item strictly lessthan k */
template <typename... T>
void put1(T &&...args) { ((cout << args << " "), ...); }
template <typename... T>
void put(T &&...args)
{
  ((cout << args << " "), ...);
  cout << '\n';
}
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

int count(int x)
{
  int ans = 0;
  while (x > 0)
  {
    ans++;
    x = x / 10;
  }
  return ans;
}
int pow1(int x, int n)
{
  if (n == 0)
  {
    return 1;
  }
  if (n == 1)
  {
    return x;
  }

  if (n % 2 == 0)
  {

    int t = pow1(x, n / 2);
    return t * t;
  }
  else
  {
    int t = pow1(x, n / 2);
    return x * t * t;
  }
}

vector<vector<int>>dp;

int solve(string num, int i, char d, int pre)
{
  

  if(i==num.size()){
    return 1;
  }

  if(dp[i][pre+1]!=-1){
    return dp[i][pre+1];
  }

  int ans = 0;
  if (pre ==-1)
  {
    
    for (char j = '1'; j <= min(num[i], d); j++)
    {
      // cout<<"sda";
      if(j==num[i]){
        ans+=solve(num, i + 1, d, 1);

      }else {
      ans = ans + solve(num, i + 1, d, 0);}
    }
  }
  else
  {

    char lim;
    if (pre==1)
    {
      
      for (char j = '0'; j <= min(num[i], d); j++)
    {
      if(j==num[i]){
       
        ans+=solve(num, i + 1, d, 1);


      }else {
      ans = ans + solve(num, i + 1, d,0);}
    }
    }
    else
    {
     
        for (char j = '0'; j <=d; j++)
    {
      ans = ans + solve(num, i + 1, d, 0);
    }
    }
  
  }

  return dp[i][pre+1]=ans;
}

void fuck()
{
  int n, d, s;
  cin >> n >> d >> s;
  // cout<<(count(10));
  int nt = count(n);
  int st = count(s);
  // cout<<nt<<"  "<<st<<endl;

  int nx = n;
  vector<int> v;
  int last = 0;
  int cnt = st;
  int sd = 1;
  while (nx > 0)
  {
    v.push_back(nx % 10);

    if (cnt > 0)
    {

      last += (nx % 10) * sd;
      sd = sd * 10;
    }
    cnt--;
    nx = nx / 10;
  }
  // cout<<last<<endl;

  int ans = 0;

  if (last >= s)
  {
    
    string num = to_string(n);
    string suff = to_string(s);
    num = num.substr(0, num.size() - suff.size());

    char dx=d+'0';
    dp.clear();
    dp.resize(num.size()+3,vector<int>(3,-1));
    // cout<<num<<endl;
    ans+=solve(num,0,dx,-1);

    
  }else{
    string num = to_string(n);
    string suff = to_string(s);
    num = num.substr(0, num.size() - suff.size());
    int sz=num.size();
   bool x=0;
    // for (int i = sz-1; i >=0; i--)
    // {
    //   if(num[i]-'0'>0){

    //     num[i]--;
    //     x=1;
    //     break;


    //   }
    // } 
    // cout<<num<<endl; 
    if(sz>0){
    if(num[sz-1]=='0'){
      if(sz>=2){
        x=1;
      }
      num[sz-1]='9';
       num[sz-2]--;
       
    } else{

      num[sz-1]--;
      x=1;

    }}
    // cout<<num<<endl;
   if(x) {
     char dx=d+'0';
    dp.clear();
    dp.resize(num.size()+3,vector<int>(3,-1));
    // cout<<num<<endl;
    ans+=solve(num,0,dx,-1);
    }


  }
  // cout << ans << endl;
  // ans=0;
  // put(ans+3799730222500643);
  // cout<<nt<<st<<endl;
  int remDigit=nt-st-1;

  for (int i = 1; i <= nt - 1; i++)
  {
    if (i - st > 0)
    {

      int x = i - st;
      // cout<<x<<endl;
      
      int y=pow1(d+1,x-1);
      y = y * d;
      ans += y;
      // cout<<ans<<endl;
    }
    if (i - st == 0)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
signed main()
{ // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt","r", stdin);
  // freopen("output.txt","w", stdout);
  // #endif
  int T;
  int t;
  cin >> T;
  // t = T;
  while (T--)
  {

    fuck();
  }
  // cout<<fixed<<setprecision(10);
  // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<" ms\n";
  return 0;
}