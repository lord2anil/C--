#include<bits/stdc++.h>
#define mod 1000000007
#define mod2 998244353
#define inf 1e10
#define eps 1e-9
using namespace std;

template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};

class Solution {
public:
     int ans=inf;
     void bfs(int v,vector<int>adj[],int n){

        queue<pair<int,int>>q;
        vector<int>dis(n+1,inf);
        q.push({v,-1});

        while (!q.empty())
        {
            int v=q.front().first;
            int p=q.front().second;
            q.pop();

            for(auto &i : adj[v])
            { 

                if(dis[i]>dis[v]+1){
                    dis[i]=dis[v]+1;
                    q.push({i,v});
                }else if(i!=p){
                    ans=min(ans,dis[v]+dis[i]+1);
                }
            
            }
           
        }
        
     }
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        


        vector<int>adj[n+1];
        for(auto &i : edges)
        {
           adj[i[0]].push_back(i[1]);
           adj[i[1]].push_back(i[0]);
        }

        for (int i = 1; i <=n; i++)
        {
           bfs(i,adj,n);
        }
        return ans;
        
    }
};