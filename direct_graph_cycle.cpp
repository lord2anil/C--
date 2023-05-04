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

bool iscycle(int x,vector<vector<int>>&adj, vector<int> &vis, vector<int> &st)
{
    
    st[x] = 1;
  
    vis[x] = 1;
    for (auto i : adj[x])
    {
        if (vis[i] == 0)
        {
            if (iscycle(x, adj, vis, st))
            {
                return 1;
            }
        }
        else if (st[i])
        {
            return 1;
        }
    }
    

    st[x] = 0;
    return 0;
}

bool isCyclic(vector<vector<int>> &edges, int v, int e)
{
   vector<vector<int>>adj(v+1);
   for (int ei = 0; ei < e; ei++)
	{
		int a = edges[ei][0];
		int b = edges[ei][1];
		adj[a].push_back(b);
	}
    vector<int> vis(v + 1, 0);
    vector<int> st(v + 1, 0);
    
    for (int i = 0; i < v; i++)
    {
        /* code */ if (vis[i] == 0 && iscycle(v, adj, vis, st))
        {
           return 1;
        }
    }

    
    
        return 0;
    
}

int main()
{

    return 0;
}