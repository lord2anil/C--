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
    int lengthOfLIS(vector<int> &a)
    {
        int n = a.size();
        int dp[n + 1];
        for (int i = 1; i <= n; i++)
        {
            /* code */ dp[i] = INT_MAX;
        }

        dp[0] = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int ind = upper_bound(dp, dp + n + 1, a[i]) - dp;
            if (a[i] > dp[ind - 1] && a[i] < dp[ind])
            {
                dp[ind] = a[i];
            }
        }
int c;
        for (int i = n; i >= 0; i--)
        {
            /* code */ if (dp[i] != INT_MAX)
            {
                c=i;
                break;
            }
        }
        return c;
    }
};

int main()
{

    return 0;
}