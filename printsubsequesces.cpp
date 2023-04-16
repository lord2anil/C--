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
void solve(vector<int>v,vector<vector<int>>&ans,int i,vector<int>&s,bool pre){
    if(i==0){
        ans.push_back(s);
        return;
    }

    solve(v,ans,i-1,s,0);
    if(i>1&&v[i-1]==v[i-2]&&!pre){
        return;
    }

    s.push_back(v[i-1]);
    solve(v,ans,i-1,s,1); 
    s.pop_back();

   
}
int main(){
    vector<vector<int>>ans;
   vector<int>v={2,3,3};
   vector<int>s;
   solve(v,ans,3,s,0);

   for (int i = 0; i < ans.size(); i++)
   {
    /* code */for (int j = 0; j < ans[i].size(); j++)
    {
        /* code */cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
   

return 0;
}




// #include<bits/stdc++.h>

// using namespace std;
// #include <vector>
// #include <array>
// using namespace std;
// using std ::max;
// using std ::min;
// #include <set>
// using std::pair;
// using std::array;
// #include <algorithm>
// #include <functional>
// #define ll long long int
// void solve(vector<int>v,vector<vector<int>>&ans,int i,vector<int>&s,int x){
//     if(x==0){
//         ans.push_back(s);
//         return;
//     }
//     if(i==0||x<0){
        
//         return;
//     }
//     s.push_back(v[i-1]);
//     solve(v,ans,i-1,s,x-v[i-1]); 
//     s.pop_back();
    
//     solve(v,ans,i-1,s,x);

   
// }
// int main(){
//     vector<vector<int>>ans;
//    vector<int>v={2,3,4,5,1,3};
//    vector<int>s;
//    int x=5;
//    solve(v,ans,6,s,x);

//    for (int i = 0; i < ans.size(); i++)
//    {
//     /* code */for (int j = 0; j < ans[i].size(); j++)
//     {
//         /* code */cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
//    }
   

// return 0;
// }







// #include<bits/stdc++.h>

// using namespace std;
// #include <vector>
// #include <array>
// using namespace std;
// using std ::max;
// using std ::min;
// #include <set>
// using std::pair;
// using std::array;
// #include <algorithm>
// #include <functional>
// #define ll long long int
// void solve(vector<int>v,vector<int>&ans,int i,int x){
//     if(i==0){
//         ans.push_back(x);
//         return;
//     }
   
//     // x+=v[i-1];
//     solve(v,ans,i-1,x+v[i-1]); 
//     // x-=v[i-1];
    
//     solve(v,ans,i-1,x);

   
// }
// int main(){
//     // vector<vector<int>>ans;
//    vector<int>v={2,3,4};
//    vector<int>ans;
  
//    solve(v,ans,3,0);
//    for (int i = 0; i < ans.size(); i++)
//    {
//     /* code */cout<<ans[i]<<" ";
//    }
   

// //    for (int i = 0; i < ans.size(); i++)
// //    {
// //     /* code */for (int j = 0; j < ans[i].size(); j++)
// //     {
// //         /* code */cout<<ans[i][j]<<" ";
// //     }
// //     cout<<endl;
// //    }
   

// return 0;
// }