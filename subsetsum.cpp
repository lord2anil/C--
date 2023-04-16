#include <bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::array;
using std::pair;
#include <algorithm>
#include <functional>
#define ll long long int
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        /* code */ cin >> a[i];
    }
    bool dp[n][m];
    dp[0][0] = 1;
    for (int i = 0; i <= m; i++)
    {
        /* code */ dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        /* code */ for (int j = 0; j <= m; j++)
        {
            if (j < a[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            int need = j - a[i];
            if (dp[i - 1][j] == 1 || dp[i - 1][need] == 1)
            {
                dp[i][j] = 1;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    cout << dp[n][m];

    return 0;
}