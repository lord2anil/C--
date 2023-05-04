#include<bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::pair;
using std::array;
#include <algorithm>
#include <functional>
#define ll long long int

vector<int>adj[1001];
bool vis[1001] ,onstack[1001];
int in[1000],low[1000];
stack<int>st;

int timer=1;
int ssc=0;



void dfs(int v){
    vis[v]=1;
    in[v]=low[v]=timer;
    onstack[v]=1;
    st.push(v);
    for (auto i : adj[v])
    {
        if(vis[i]==1&&onstack[i]==1){
            low[v]=min(low[v],in[i]);
        }
        else{
            if(vis[i]==0){
                dfs(i);
                if(onstack[i]==1){
                    low[v]=min(low[v],low[i]);
                }
            }
        }
    }

    if(in[v]==low[v]){
        ssc++;
        int u;
        while (1)
        {
           u=st.top();
           st.pop();onstack[u]=0;
           cout<<u;
           if(v==u) break;
        }
       

        
    cout<<endl;
    }
    

}


int main(){
int m,n;
cin>>n>>m;
while (m--)
{int x,y;
cin>>x>>y;
adj[x].push_back(y);
    /* code */
}
for (int i = 1; i <=n; i++)
{
    vis[i]=onstack[i]=0;
}
for (int i = 1; i <=n; i++)
{
    /* code */if(vis[i]==0){
        dfs(i);
    }
}








return 0;
}