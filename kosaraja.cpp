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
const int N=100;
vector<int>adj[N],tr[N];
int vis[N];
vector<int>order;
vector<int>ssc;

void dfs1(int v){
    vis[v]=1;
    for (auto i : adj[v])
    {
        if(vis[i]==0){
            dfs1(i);
        }
    }
    order.push_back(v);

    
}


void dfs(int v){

    vis[v]=1;
    for (auto i : tr[v])
    {if(vis[i]==0){
        dfs(i);}
    }
    ssc.push_back(v);
    



}
int main(){
    int n,m;
    cin>>n>>m;
    while (m--)
    {int x, y;
    cin>>x>>y;
    adj[x].push_back(y);
    tr[y].push_back(x);
        /* code */
    }
    
    for (int i = 1; i <= n; i++)
    {
       if(vis[i]==0){
        dfs1(i);
       }
    }
    //  reverse(order.begin(), order.end());
     for (int i = 1; i<=n; i++)
     {
        
        vis[i]=0;
     }


// for (int i = 0; i <n; i++)
// {
//     /* code */cout<<order[i];
// }

     for (int i = 1; i <=n; i++)
     {
        if(vis[order[n-i]]==0){
            ssc.clear();
            dfs(n-i);
        
        for (auto i : ssc)
        {
            cout<<i<<" ";
        }
        
        cout<<endl;
        

        }
        
     }
     



return 0;
}