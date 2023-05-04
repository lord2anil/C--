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
const int inf=1e6;
int main(){

    int m,n;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    while (m--)
    {int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
    }

    vector<int> dis(n+1,inf);
    // int source;
    // cin>>source;
    dis[1]=0;
    set<pair<int,int>>s;
    s.insert({0,1});
    
    while(!s.empty()){
        auto x=*(s.begin());
        // int curr= x.second;
        // int curr_d=x.first;
        s.erase(x);
        for(auto i: adj[x.second]){
            if(i.second + dis[x.second]<dis[i.first]){
                s.erase({dis[i.first],i.first});
                dis[i.first]=i.second + dis[x.second];
                s.insert({dis[i.first],i.first});
            }
        }


    }

for (int i = 1; i < n; i++)
{
    /* code */cout<<dis[i]<<endl;
}






    



return 0;
}