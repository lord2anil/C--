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

vector<int>adj[1000];
int vis[1000];
ll par[1000];
int level[1000];

void dfs(int x,int y,int l){
    vis[x]=1;
    par[x]=y;
    level[x]=l;
    for(auto child:adj[x]){
        if(vis[child]==0){

            dfs(child,x,l+1);
        }
    }




}





int lca(int a,int b){
    if(level[a]<level[b]) swap(level[a],level[b]);
    int d=level[a]-level[b];
    while (d--)
    {
        b=par[b];

    }
    
    if(a==b) return a;

    while(par[a]!=par[b]){
        a=par[a];b=par[b];
    }
    return par[a];

}


int main(){

    for (int i = 1; i <= 1000; i++)
    {
        /* code */par[i]=i;
    }
    
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        /* code */int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    };
    dfs(1,1,0);
    cout<<lca(1,2);
    // for (int i = 1; i <=4; i++)
    // {
    //     /* code */cout<<par[i];
    // }
    

return 0;
}