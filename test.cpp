#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
/*----------------------Graph Moves----------------*/
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
// int dx[8]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// int dy[8]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// int dx[8]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//  int dy[8]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/
const int MOD = 1e9 + 7;
// unsigned int NO_OF_BITS= sizeof(n) * 8;
void fuck(){
int n;
cin>>n;
string s;
cin>>s;
map<char,vector<int>>mp;
for (int i = 0; i < n; i++)
{
  /* code */mp[s[i]].push_back(i);
}
if(n%3==1){
  put("yes");
  return ;
}

 
 for(auto &i : mp)
 { vector<int>v=i.second;
      int l=0;
      int r=v.size()-1;
       


        while(v[l]%3!=0) l++;

        while((n-v[r]-1)%3!=0)r--;
       if(v[l]<v[r]){
    
        int x=v[l];
        int y=n-v[r]-1;
         if(x%3==0&&y%3==0&&l<r){
          put("YES");
          return ;
         }}
        

      
      put("NO");
      return ;
 }
}




signed main()
{
 
  int T;
  int t;
  cin>>T;
  t = T;
  while (T--)
  { fuck(); }
  // cout<<fixed<<setprecision(10);
  // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<" ms\n";
  return 0;}