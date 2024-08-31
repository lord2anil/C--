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



signed main()
{ 
int n;

cin>>n;
vector<int>nums;
for (int i = 0; i < n; i++)
{
    /* code */int x;
    cin>>x;
    nums.push_back(x);
}
 
    vector<int>temp;
    temp.push_back(nums[0]);
    int len=1;

    for (int i = 1; i < n; i++)
    {
        /* code */if(nums[i]>=temp.back()){
            temp.push_back(nums[i]);
            len++;
            
        }else{
            int idx=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
            temp[idx]=nums[i];
        }
        put(len);
    }



  return 0;}