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

class Solution
{
public:
    int solve(string &text1, string &text2, int n, int m, vector<vector<int>> &dp)
    {

        if (m == 0 || n == 0)
        {
            return 0;
        }

        if (dp[n][m] != -1)
        {
            return dp[n][m];
        }
        int ans;
        if (text1[n - 1] == text2[m - 1])
        {
            ans = 1 + solve(text1, text2, n - 1, m - 1, dp);
        }
        else
        {
            ans = max(solve(text1, text2, n, m - 1, dp), solve(text1, text2, n - 1, m, dp));
        }
        dp[n][m] = ans;
        return dp[n][m];
    }

    int solveTab(string &text1, string &text2, int n, int m)
    {

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {

                if (text1[i - 1] == text2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }
int lcs(string &X, string &Y)
{
      
    // Find lengths of two strings
    int m = X.length(), n = Y.length();
  
    int L[2][n + 1];
  
    // Binary index, used to
    // index current row and
    // previous row.
    bool bi;
  
    for (int i = 0; i <= m; i++)
    {
          
        // Compute current 
        // binary index
        bi = i & 1;
  
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[bi][j] = 0;
  
            else if (X[i-1] == Y[j-1])
                 L[bi][j] = L[1 - bi][j - 1] + 1;
  
            else
                L[bi][j] = max(L[1 - bi][j], 
                               L[bi][j - 1]);
        }
    }
  
    // Last filled entry contains
    // length of LCS
    // for X[0..n-1] and Y[0..m-1] 
    return L[bi][n];
}
    int longestCommonSubsequence(string text1, string text2)
    {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        return solveTab(text1, text2, n, m);
    }
};

int main()
{

    return 0;
}





// https://www.geeksforgeeks.org/printing-longest-common-subsequence/