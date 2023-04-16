#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 2;

bool vis[N];
vector<int> adj[N];
vector<int>dis;
void dfs(int node ,int d)
{
    
    vis[node] = 1;

// SSS
    //  cout<<d<<endl;
    // d++;
    
    //--------------- dfs💥💥💥💥💥
    // cout << node << endl;
    for (auto it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (vis[*it] == 0)
        {
            
            /* code */ dfs(*it,d);
        }
    }
}

int main()
{

    for (int i = 0; i < N; i++)
    {
        /* code */ vis[i] = 0;
    }

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        /* code */ int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
dfs(2,0);
    

    // <-------------- 😀😀😀😀😀😀😀😀count connected components-------->>
    // int ans=0;
    // for (int i = 1; i <= n; i++)
    // {if (vis[i]==0)
    // {ans++;
    //     /* code */dfs(i);
    // }
    
    // }
    // cout<<ans;

    return 0;
}