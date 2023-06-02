#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
class Solution {
public:
    int myAtoi(string s) {
      bool p=1;
      int n=s.size();
      string ans="";
      for (int i = 0; i < s.size(); i++)
      {
        if((s[i])==45&&i+1<n&&s[i+1]>=48&&s[i+1]<=57){
          p=0;
        }
        if(s[i]>=48&&s[i]<=57){
          ans.push_back(s[i]);
        }
      }
      long long sol=0;
      int x=1;
      int mul=0;
      for (int i = 0; i < ans.size(); i++)
      
      {
        while(x&&i==48){
          i++;

        }
        x=0;
        int y=s[i]-'0';
        sol=sol*mul+y;
        mul=mul*10;


      
      }
      if(!p) sol=-sol;

      if(sol<-(2<<31)) sol=(2<<31);
      if(sol>(2<<31)-1) sol=(2<<31)-1;
      return

        
    }
};
signed main()
{ 
char c='-';
put((2>>31));


  return 0;}