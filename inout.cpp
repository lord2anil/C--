#include<bits/stdc++.h>

using namespace std;
const int N=10000;

vector<int>adj[N];
int vis[N];
int in[N];
int out[N];
 int ti=1;
void dfs(int node){
  vis[node]=1;
  in[node]=ti;
  ti++;
  
  for (auto it= adj[node].begin(); it!= adj[node].end(); it++)
  {
    /* code */if (vis[*it]==0){
      dfs(*it);
    }
    {
      /* code */
    }
    
  }
   out[node]=ti;
  ti++;
  
};







int main(){




  int n,m;
  cin>>n>>m;

  for (int i = 0; i < m; i++)
  {
    /* code */int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);

  };

  dfs(1);
  
  for (int  i = 1; i <= n; i++)
  {
    /* code */cout<<in[i]<<" "<<out[i]<<endl;
  }
  



  


return 0;
}