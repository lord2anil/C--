#include <bits/stdc++.h>

using namespace std;

const int N = 1001;

int vis[N];
vector<int> arr[N];
int dis[N];
int col[N];

bool dfs(int node ,int c)
{
  
  vis[node] = 1;
  col[node]=c;




  for (auto it = arr[node].begin(); it != arr[node].end(); it++)
  {
    /* code */ if (vis[*it] == 0)
    {
      /* code */ if(dfs(*it,c^1)==false){
        return false;
      }
    }
    else{
      if (col[node]==col[*it])
      {
        /* code */return false;
      }
      
    }
    
  }
  return true;
}

int main()
{

  int n, m;

  for (int i = 0; i <=N; i++)
  {
    /* code */ vis[i] = 0;
  }

  cin >> n>>m ;
  for (int i = 0; i <m; i++)
  {
    int a, b;
    cin >> a >> b;
    arr[a].push_back(b);
    arr[b].push_back(a);
  };
  
  cout<<dfs(1,1);










  


  return 0;
}