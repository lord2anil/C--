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
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};


int cnt=0;
vector<int>merge(vector<int>a,vector<int>b){
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    vector<int>ans;
    while (i<n&&j<m)
    { if(a[i]<=b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            cnt+=n-i;
            ans.push_back(b[j]);
             j++;
        }
    }
    while(i<n) {ans.push_back(a[i]);i++;}
    while(j<m){ ans.push_back(b[j]);j++;}

    return ans;
    
}

vector<int>solve(vector<int>v,int l,int r){
    if(l==r){
        return {v[r]};
    }

    int mid=(l+r)/2;
   

     vector<int>a=solve(v,l,mid);  
     vector<int>b=solve(v,mid+1,r);  

     return merge(a,b);


}
signed main()
{ 
vector<int>v={4,6,2,6,1,8,2,4,6};

vector<int>v1=solve(v,0,8);
sort(v.begin(),v.end());
if(v1==v){
    put(1);
}

// vector<int>a={1,3,5};
// vector<int>b={2,4,6,8};
// vector<int>v1=merge(a,b);
for(auto &i : v1)
{
put1(i);
}

  return 0;}