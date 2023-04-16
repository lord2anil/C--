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

int parent[10001];
int siz[10001];

void make(int v){
parent[v]=v;
siz[v]=1;

}
int find(int v){
  if(parent[v]==v)return v;
  return  parent[v]=find(parent[v]);

}
void union_(int a,int b){
  a=find(a);
  b=find(b);
  if(a!=b){
    if(siz[a]<siz[b]) swap(a,b);
    parent[b]=a;

siz[a]+=siz[b];
  }
}



int main(){
for (int i = 0; i < 10000; i++)
{
  /* code */parent[i]=i;
}

int m,n;
cin>>m>>n;
vector<vector<int>>edge;
for (int i = 0; i < n; i++)
{
  /* code */int x,y,z;
  cin>>x>>y>>z;
  edge.push_back({x,y,z});
}
sort(edge.begin(),edge.end());
int cost=0;
for (auto i:edge)

{
  int w=i[0];
  int v=i[1];
  int u=i[2];
  int x=find(u);
  int y=find(v);
  if(x==y)continue;
  else{
    union_(u,v);
    cost+=w;
  }
  /* code */
}
cout<<cost;








return 0;
}