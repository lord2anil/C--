// #include <bits/stdc++.h>

// using namespace std;
// #include <vector>
// #include <array>
// using namespace std;
// using std ::max;
// using std ::min;
// #include <set>
// using std::array;
// using std::pair;
// #include <algorithm>
// #include <functional>
// #define ll long long int
// #define inf 1e7
// int main()
// {
//     int m, n;
//     cin>>n>>m;
//     int a[n][m];
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             /* code */ cin >> a[i][j];
//         }

//         /* code */
//     }

// int dp[n+1][m+1];
// for (int i = 1; i <=m+1; i++)
// {
//     /* code */dp[n+1][i]=inf;
// }
// for (int i = 1; i <=n+1; i++)
// {
//     /* code */dp[i][m+1]=inf;
// }
// dp[n][m+1]=dp[m][n+1]=0;
// for (int i = n; i >= 1; i--)
// {
//     /* code */for (int j = m; j >= 1; j--)
//     {
//         dp[i][j]= a[i][j]+min(dp[i+1][j],dp[i][j+1]);
//     }
    
// }
// for (int i = 1; i <=n; i++)
// {for (int j =1; j <=m; j++)
// {
//    cout<<dp[i][j]<<" ";
// }
// cout<<endl;

//     /* code */
// }

    

//     return 0;
// }





//<-------- Min-Max path queries on 2D Grid Part 2😍😍😍😍❤️❤️❤️❤️❤️❤️💕😘
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
#define inf 1e4
int main(){
 int m, n;
    cin>>n>>m;
    int a[n][m];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            /* code */ cin >> a[i][j];
        }

        /* code */
    }

int dp[n+2][m+2];
for (int i = 1; i <=n+1; i++)
{
    /* code */dp[i][0]=inf;
}
for (int i = 1; i <=n+1; i++)
{
    /* code */dp[i][m+1]=inf;
}
for (int i = 1; i <=m; i++)
{
   dp[n][i]=a[n][i];
}

for (int i = n-1; i <=1; i--)
{
    /* code */for (int j = m; j <=1; j--)
    {
        // if(j+1>m){
        //     dp[i][j]=a[i][j]+min(dp[i+1][j],dp[i+1][j-1]);
        // }
        // else if(j-1<1){
        //     dp[i][j]=a[i][j]+min(dp[i+1][j],dp[i+1][j+1]);

        // }
        // else{
        /* code */dp[i][j]=a[i][j]+min(dp[i+1][j],min(dp[i+1][j-1],dp[i+1][j+1]));
    }
    
}




for (int i = 1; i <=n; i++)
{for (int j =1; j <=m; j++)
{
   cout<<dp[i][j]<<" ";
}
cout<<endl;

    /* code */
}


return 0;
}