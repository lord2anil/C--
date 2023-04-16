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

void solve(vector<int>&v){
   int x=*max_element(v.begin(),v.end());
   vector<int>hs(x+1,0);
   for (int i = 0; i <v.size(); i++)
   {
    hs[v[i]]++;
   }
   for (int i = 1; i < x+1; i++)
   {
     hs[i] =hs[i-1]+hs[i];
   }
   vector<int>ans(v.size()+1,0);
   for (int i = v.size()-1; i>=0; i--)
   {
    /* code */hs[v[i]]--;
    ans[hs[v[i]]]=v[i];
        

   }
   for (int i = 0; i < v.size(); i++)
   {
    /* code */cout<<ans[i]<<" ";
   }
   
   
   
}

int main(){
 vector<int> arr = { 2, 5, 6, 2, 3, 10, 3, 6, 7, 8 };
 solve(arr);

return 0;
}