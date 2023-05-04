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
int n,m;









int main(){



cin>>n>>m;


for (int i = 1; i <= n; i++)
{
    /* code */for (int j = 1; j <= m; j++)
    {
        /* code */cin>>gird[i][j];
    }
    
}
// dfs(1,1);


// count connected component
int cnt=0;
for (int i = 1; i<=n; i++)
{for (int j = 1; j <=m; j++)
{
    /* code */if (vis[i][j]==0)
    {cnt++;
        /* code */dfs(i,j);
    }
    
}

    /* code */
}

cout<<cnt;





return 0;
}