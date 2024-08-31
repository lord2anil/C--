#include <bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::array;
using std::pair;
#include <algorithm>
#include <functional>
#define ll long long int
vector<int> adj[1000];
int par[1001];
int lev[1001];
int lca[1000][10];
int maxn = 10;

void dfs(int v, int l, int par)
{
    lev[v] = l;
    lca[v][0] = par;

    for (auto i : adj[v])
    {
        if (par != i)
        {
            dfs(i, l + 1, v);
        }
    }
}

void init(int n)
{
    dfs(1, 0, -1);

    for (int i = 1; i <= maxn; i++)
    {
        /* code */ for (int j = 1; j <= n; j++)
        {
            if (lca[j][i - 1] != -1)
            {
                int par = lca[j][i - 1];
                lca[j][i] = lca[par][i - 1];
            }
            /* code */
        }
    }
}

int lCA(int a, int b)
{
    if (lev[b] < lev[a])
    {
        swap(a, b);
    }
    int d = lev[b] - lev[a];
    while (d>0)
    {
        int i = log2(d);
        b = lca[b][i];
        d -= 1 << i;
    }
    if (a == b)
    {
        return a;
    }

    for (int i = maxn; i >= 0; i--)
    {
        /* code */ if (lca[a][i] != -1 && lca[a][i] != lca[b][i])
        {
            a = lca[a][i];
            b = lca[b][i];
        }
    }

    return lca[a][0];
}

int main()
{

    int n;
    cin >> n;
    int m = n - 1;
    for (int i = 1; i <= n; i++)
    {
        /* code */ for (int j = 0; j <= maxn; j++)
        {
            /* code */ lca[i][j] = -1;
        }
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        /* code */
    }
    init(n);


//  for (int i = 1; i <= n; i++)
//     {
//         /* code */ for (int j = 0; j <=3; j++)
//         {
//             /* code */ cout<<lca[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    cout<<lCA(5,4);


    

    return 0;
}