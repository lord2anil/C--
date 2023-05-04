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
int n,q;
cin>>n>>q;
string s;
cin>>s;
map<pair<char,int>,int>mp;
// mp[{s[0],0}]=1;
for (int i = 0; i <n; i++)
{
  /* code */mp[{s[i],-1}]=0;
}

for (int i = 0; i < n; i++)
{
 
 for (int j = 0; j < n; j++)
 {
  mp[{s[j],i}]=mp[{s[j],i-1}];
 }
 mp[{s[i],i}]=mp[{s[i],i-1}]+1;
 
 
}
// cout<<mp[{'a',0}];

while (q--)
{
  /* code */int l,r;
  cin>>l>>r;
  int c=0;
  // 0 based indexing
  l--;
  r--;
  
  for (int i = l; i <=r; i++)
  {
    if((mp[{s[i],r}]-mp[{s[i],l-1}])%2){
      c++;
    }
    if(c>1) {
      cout<<0<<endl;
      break;}
  }
  if(c<=1){
    cout<<1<<endl;
  }
  
}




return 0;
}