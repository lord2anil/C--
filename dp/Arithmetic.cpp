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
class Solution{   
public:
    int lengthOfLongestAP(int a[], int n) {
   if(n<=2){
    return n;
   }
   int ans=0;
 
   unordered_map<int,int>dp[n+1];

   for (int i = 1; i < n; i++)
   {
    /* code */for (int j = 0; j < i; j++)
    {
        /* code */int diff=a[i]-a[j];
        int cnt=1;
               if(dp[j].count(diff)){
                cnt= dp[j][diff];
               }
           dp[i][diff]=cnt+1;
           ans=max(ans, dp[i][diff]);
    }
    
   }
return ans;
   
    }
};
int main(){

return 0;
}