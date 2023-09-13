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
    for (int i = 0; i < n; i++)
    {
        hs[i+1]=(hs[i]*base+((text[i]-'a'+1)))%mod;
    }
    long long h1=0;

    for (int i = 0; i < m; i++)
    {
        h1=(h1*base+(pat[i]-'a'+1))%mod;
    }

    for (int i = 0; i+m-1 < n; i++)
    {
        // long long curr=(hs[i+m]-hs[i]+mod)%mod;
        long long curr=(hs[i+m]-(hs[i]*power[m])%mod+mod)%mod;
        
        if(curr==h1){
            cout<<"mil gya->"<<i<<endl;
        }
    }
    
    

    
    
}


signed main()
{ 
string s="anil";
string text="anilanilanil";
rolling_hash(s,text);

  return 0;}