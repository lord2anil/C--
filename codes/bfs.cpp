#include<bits/stdc++.h>

using namespace std;
const int  N= 1e5+2;

bool vis[N];
vector<int>adj[N];
int main(){

    for (int i = 0; i < N; i++)
    {
        /* code */vis[i]=0;
    }
    



int n,m;
cin>>n>>m;

for (int i = 0; i < m; i++)
{
    /* code */int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
};

queue<int>q;
q.push(1);vis[1]=true;

while (!q.empty())
{
int node=q.front();
q.pop();
cout<<node<<endl;
for( auto it=adj[node].begin();it!=adj[node].end();it++)
{ if(!vis[*it]){
    vis[*it]=1;
    q.push(*it);
}
}



}







return 0;
}