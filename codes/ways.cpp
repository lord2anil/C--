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


// itrative apporach-----------------------------------------💯💯💯💯💯💯💯
// int dp[1000][1000];


// int main(){
// int n,m;
// cin>>n>>m;
// for (int i = 1; i <= m; i++)
// {dp[n][i]=1;
//     /* code */
// }
// for (int i = 1; i <= n; i++)
// {dp[i][m]=1;
//     /* code */
// }

// for (int i = n-1; i >=1; i--)
// {
//     /* code */for (int j=m-1; j>=1; j--)
//     {
//         /* code */dp[i][j]=dp[i+1][j]+dp[i][j+1];
//     }
    
// }

// for (int i = 1; i <= n; i++)
// {
//     /* code */for (int j = 1; j <=n; j++)
//     {
//         /* code */cout<<dp[i][j]<<" ";
//     }
//     cout<<endl;
// }







// return 0;
// }


// recursive approch----------------💥💥💥💥💥💥

int dp[1000][1000];
    int n,m;

int fill(int x,int y){


if (x>n||x<1||y>m||y<1)
{
    /* code */return 0;
}



if (x==n&&y==m)
{
    /* code */dp[x][y]=1;
    return 1;
}

    if(dp[x][y]!=-1){
    return  dp[x][y];
    }

    dp[x][y]=fill(x,y+1)+fill(x+1,y);

    return dp[x][y];





}






int main(){
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    fill(1,1);



for (int i = 1; i <= n; i++)
{
    /* code */for (int j = 1; j <=n; j++)
    {
        /* code */cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}