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
int dp[1000][1000];
    char a[100];



int main(){
    int n;
    cin>>n;
    // string s;
    // cin>>s;
    for (int i = 1; i <= n; i++)
    {
        /* code */cin>>a[i];
    }
    
    for (int i = 0; i <= n; i++)
    {
        /* code */dp[0][i]=1;
        dp[1][i]=1;
    }

    for (int i = 2; i <=n; i++)
    {
        /* code */for (int j = i; j <= n; j++)
        {
            /* code */if (a[j]==a[j-i+1]&&dp[i-2][j-1]==1)
            {
                /* code */dp[i][j]=1;
            }
            else{
                dp[i][j]==0;
            }
            
        }
        
    }
    
    for (int i = 0; i <=n; i++)
    {
        /* code */for (int j = 0; j <= n; j++)
        {
            /* code */cout<<dp[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    







return 0;
}







// 👌👌👌👌👌😘😘😘😘😘😘😘💕💕


// lsiuash


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

// string longestPalinSubstring(string str)
// {
//     int n = str.length();
//     vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
//     for (int i = 0; i <= n; i++)
//     {
//         dp[0][i] = 1;
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         dp[1][i] = 1;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = i-1; j < n; j++)
//         {
//             if (str[j] == str[j - i + 1] && dp[i - 2][j - 1] == 1)
//             {
//                 dp[i][j] = 1;
//             }
//         }
//     }

//     int start = 0;
//     int l = 1;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             /* code */ if (dp[i][j] == 1)
//             {

//                 if (i > l)
//                 {
//                     l = i;
//                     // start = j - i + 1;
//                 }
//             }
//         }

//         /* code */
//     }


// for (int i = 0; i <=n; i++)
// {if(dp[l][i]==1){
//     start = i - l + 1;
//     break;
// }
//     /* code */
// }





//     string s = str.substr(start, l);
//     return s;
// }

// int main()
// {

//     return 0;
// }




// string longestPalinSubstring(string str)
{
    int n =str.length();
    int start=0;
    int end=1;
    int l,h;

    for (int i = 1; i < n; i++)
    {
       l=i-1;
       h=i;

       while (l>=0&&h<n&&str[l]==str[h])
       {

        if(h-l+1>end){
            start=l;
            end=h-l+1;
                                                             
        }
        l--;
        h++;

       }

       l=i-1;
       h=i+1;
        while (l>=0&&h<n&&str[l]==str[h])
       {

        if(h-l+1>end){
            start=l;
            end=h-l+1;
                                                             
        }
        l--;
        h++;

       }


       







    }
    string s=str.substr(start,end);
    return s;
      
}