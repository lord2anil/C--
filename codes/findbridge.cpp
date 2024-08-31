#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>

using std::array;
#include <algorithm>
#include <functional>
#define ll long long int
int timer;

vector<int> adj[100];
vector<int> in, low;
vector<int>vis;

void dfs(int node, int par)
{
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;
    for (int child : adj[node])
    {
        if (child == par)
            continue;

        if (vis[child] == 1)
        {
            low[node] = min(low[node], in[child]);
            /*child is back edge */
        }

        else
        {
            dfs(child, node);
            low[node] = min(low[node], low[child]);
            /*forward ebge*/ if (low[child] > in[node])
            {
                cout << node << " " << child << "is a bridge" << endl;
            }
            /* code */
        }
    }
}

int main()
{
    int n, m, x, y;
    cin >> n >> m;
    vis.assign(n, false);
    in.assign(n, -1);
    low.assign(n, -1);
    while (m--)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        /* code */
    };
    dfs(1, -1);

    return 0;
}