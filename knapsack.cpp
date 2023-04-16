#include <bits/stdc++.h>

using namespace std;
const int N = 100 ;
using std ::max;

int val[N];
int wt[N];
int dp[N][N];

int knap(int n, int w)
{
    if (w <= 0)
    {
        return 0;
    }
    if (n <= 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        /* code */ return knap(n - 1, w);
    }
    dp[n][w]=max(knap(n - 1, w), knap(n - 1, w - wt[n - 1]) + val[n - 1]);
    if (dp[n][w]!=-1)
    {
        /* code */return dp[n][w];
    }

    

    return dp[n][w];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */for (int j = 0; j < n; j++)
        {
            /* code */dp[i][j]=-1;
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> val[i];
    }
    int w;
    cin >> w;
    cout << knap(n, w);

    return 0;
}