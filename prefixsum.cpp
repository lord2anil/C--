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
int main(){
  int n;
  cin>>n;
  int a[n][n];
  for (int i = 1; i <=n; i++)
  {
    /* code */for (int j = 1; j <=n; j++)
    {
      /* code */cin>>a[i][j];
    }
    
  }


  
  int v[n+2][n+2];
  for (int i = 0; i <=n+1; i++)
  {
    /* code */v[i][0]=0;
              v[0][i]=0;
  }
  

  for (int i = 1; i <=n; i++)
  {
     for (int j = 1; j <=n; j++)
     {
      /* code */v[i][j]=v[i-1][j]+v[i][j-1]+a[i][j]-v[i-1][j-1];
     }

    }
    for (int i = 1; i <=n; i++)
    {
      /* code */for (int j = 1; j <=n; j++)
      {
        /* code */cout<<v[i][j]<<" ";
      }cout<<endl;
      
    }
    
  


return 0;
}