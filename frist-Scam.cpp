#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
 
  string line;
  int index = 1;
  vector<int> res;
  int L, ans=0;
  multiset<int> imp;
  while (!cin.eof()) {
    getline(cin, line);
    //cout << "line[" << index++ << "]:" << line << "\n";
    int n=line.size();
    //cout << "n=" << n << endl;
    int cur=0;
    for(int i=0;i<n;i++)
    {
      if(line[i]==' ')
      {
        res.push_back(cur);
        cur=0;
      }
      else
      {
        int val=line[i]-'0';
        cur=cur*10+val;
      }
    }
    if(cur>0)
      L=cur;
  }
  // for(auto i: res)
  //   cout << i << ' ';
  sort(res.begin(), res.end());
  //reverse(res.begin(), res.end());
  imp.insert(L);
  int m=res.size();
  int l=0, r=m-1;
  while(l<=r)
  {
    int cur=L;
    while((cur>=res[r]))
    {
      cur-=res[r];
      r--;
      // cout << "r " << res[r] << endl;
    }
    if(l>r)
    {
      ans++;
      break;
    }
    // cout << cur << ' ' << res[r] << endl;
    while((cur>=res[l]))
    {
      cur-=res[l];
      l++;
      // cout << "l " << res[l] << endl;
    }
    // cout << l  << endl;
    ans++;
  }
  //cout << l << ' ' << r << endl;
  cout << ans << endl;
  return 0;
}