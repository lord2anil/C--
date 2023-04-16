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

int vis[100][100];
int gird[100][100];
int dis[100][100];


int n,m;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,0-1};
bool isvalid(int x,int y){
    if (vis[x][y]==0&&x>=1&&x<=n&&y>=1&&y<=m)
    {
        /* code */return true;
    }
    return false;
    
}


void bfs(int x,int y){

queue<pair<int,int>>q;
q.push({x,y});
vis[x][y]=1;
dis[x][y]=0;

while (!q.empty())
{

    int currX=q.front().first;
    int currY=q.front().second;
    q.pop();



    /* code */for (int i = 0; i < 4; i++)
    {
        /* code */if (isvalid(currX+dx[i],currY+dy[i]))
        {
            int newX=currX+dx[i];
            int newY=currY+dy[i];
            dis[newX][newY]==dis[currX][currY]+1;
            vis[newX][newY]=1;
            q.push({newX,newY});
        }
        
    }
    
}


}



int main(){


    
cin>>n>>m;
bfs(1,1);
cout<<dis[2][2];


// for (int i = 1; i <= n; i++)
// {
//     /* code */for (int j = 1; j <= m; j++)
//     {
//         /* code */cout<<dis[i][j]<<endl;
//     }
    
// }

return 0;
}