#include <bits/stdc++.h>
#define sz(x) (int)x.size()
#define mod 1000000007
#define mod2 998244353
#define inf 1e18
#define eps 1e-9
using namespace std;
#define int long long
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
// template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
/* oset<int>s:s.find_by_order(k):Kth element in
,s.order_of_key(k):Number of item strictly lessthan k */
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

int partion(vector<int> &v, int l, int r)
{

    int pi = v[r];
    int i = l ;
    for (int j = l; j < r; j++)
    {
        if (v[j] < v[r])
        {
            swap(v[i], v[j]);
            i++;
        }
    }
    swap(v[i], v[r]);

    return i-1;
}

void quicksort(vector<int> &v, int l, int r)
{
    if (l < r)
    {
        int pivot = partion(v, l, r);
        quicksort(v, l, pivot - 1);
        quicksort(v, pivot + 1, r);
    }
}

signed main()

{
    vector<int> v;
    int x;
    while (cin >> x)
        v.push_back(x);
    int n = v.size();

    quicksort(v, 0, n - 1);
    for (auto &i : v)
    {
        put1(i);
    }
    return 0;
}