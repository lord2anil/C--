#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a;i>=b;i--)
#define trav(a,x) for(auto &a:x)
#define fi first
#define se second
// #define mod 1000000007
#define mod2 998244353
#define inf 1e18
#define eps 1e-9
using namespace std;

template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};

    int inv(int a,int mod) {
  return a <= 1 ? a : mod - (long long)(mod/a) * inv(mod % a,mod) % mod;
}




void rolling_hash(string pat, string text){
    int m=pat.size();
    int n=text.size();
    vector<long long >power(max(m,n)+1,1);
    power[0]=1;
    int base =31;//53
    int mod=1e9+9;
    for (int i = 1; i < power.size(); i++)
    {
       power[i]=(power[i-1]*base)%mod;
    }
    vector<long long>hs(n+1,0);
    hs[0]=((text[0]-'a'+1));
    for (int i = 1; i < n; i++)
    {
        hs[i]=(hs[i-1]+((text[i]-'a'+1))*power[i])%mod;
    }
    long long h1=0;

    for (int i = 0; i < m; i++)
    {
        h1=(h1+(pat[i]-'a'+1)*power[i])%mod;
    }
    
    for (int i = m-1; i< n; i++)
    {
        long long curr=0;
        if(i-m==0){
            curr=hs[i];
        }else{
          curr= (hs[i]-hs[i-m]+mod)%mod;
         curr=(curr*inv(power[i-m+1],mod))%mod;
         }
        if(curr==h1){
            cout<<"mil gya->"<<i<<endl;
        }
    }
    
    

    
    
}


signed main()
{ 
string s="anil";
string text="anielanilanil";
rolling_hash(s,text);

  return 0;}