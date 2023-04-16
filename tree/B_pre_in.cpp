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

bool isvalid(int x,int y,int n, int m, vector<vector<bool>>&vis){
    if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==0){
        return 1;
    }
    return 0;
}

 int dx[]={+1,-1,+0,+0};
int dy[]={+0,+0,+1,-1};
void dfs(vector<vector<int>> &image, int x, int y, int newColor,int che,int n, int m, vector<vector<bool>>&vis ){
    
    vis[x][y]=1;
    image[x][y]=newColor;

    for (int i = 0; i < 4; i++)
    {
      if(isvalid(x+dx[i],y+dy[i],n,m,vis)&&image[x+dx[i]][y+dy[i]]==che){
        dfs(image,x+dx[i],y+dy[i],newColor,che,n,m,vis);
      }
    }
    
    



}












vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int n=image.size();
    int m=image[0].size();
    int che=image[x][y];
    vector<vector<bool>>vis(n+1,vector<bool>(m+1,0));
    dfs(image,x,y,newColor,che,n,m,vis);
    return image;
}














int main(){

return 0;
}