#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
//oset<int>s:s.find_by_order(k):Kth element in "s",s.order_of_key(k):Number of item strictly lessthan k
#define sz(x) (int)x.size()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repd(i, a, b) for (int i = a; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define fi first
#define se second
#define mod 1000000007
#define mod2 998244353
#define inf 1e18
#define eps 1e-9

#define int long long
template <typename... T>
void put1(T &&...args) { ((cout << args << " "), ...); }
template <typename... T>
void put(T &&...args)
{
    ((cout << args << " "), ...);
    cout << '\n';
}
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
vector<int> ct;
vector<int> pt;

vector<vector<int>> v;
vector<vector<int>> ft;


signed main()
{
    int n;
    cin >> n;
    pt.resize(n, 0);
    ct.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
        ft.push_back({a, b, i});
    }
    oset<pair<int,int>>st,st1;
    sort(ft.begin(), ft.end(),[&](vector<int>v1,vector<int>v2){
        if(v1[0]==v2[0]){
            return v1[1]>v2[1];
        } return v1[0]<v2[0];
    });
    // for(auto &i : ft)
    // {
    //   put1(i[0],i[1],i[2]);
    //   cout<<endl;
    // }
    for (int i = n-1; i >=0; i--)
    {
        ct[ft[i][2]]=st.order_of_key({ft[i][1]+1,-1});
        st.insert({ft[i][1],i});
    }
    for (int i = 0; i<n; i++)
    {
        pt[ft[i][2]]=i-st1.order_of_key({ft[i][1],-1});
        st1.insert({ft[i][1],i});
    }
    

   

    for (auto &i : ct)
    {
        put1((i>0));
    }
    cout << endl;

    for (auto &i : pt)
    {
        put1((i>0));
    }

    return 0;
}