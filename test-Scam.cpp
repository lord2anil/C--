#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}

template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}



   int solve(int i,int j,int k,string s,int n,char c){
    if(i>n|| j<0){
        return 0;
    }


    int ans=-1;
    if(s[i]==c){
        ans=max(ans,solve(i+1,j,k,s,n,c)+1);
    }
    else if(k>0){
        ans=max(ans,solve(i+1,j,k-1,s,n,c)+1);
    }
     if(s[j]==c){
        ans=max(ans,solve(i,j-1,k,s,n,c)+1);
    }
    else if(k>0){
        ans=max(ans,solve(i,j-1,k-1,s,n,c)+1);
    }
    return ans;


   }



    int characterReplacement(string s, int k) {
        int n=s.size();
        // map<char,int>mp;
        int ans=-1;
      for (int i = 0; i < n; i++)
      {
        ans=max(ans,solve(i,i,k,s,n,s[i]));
       
      }
      
        
        
     return ans;
       
    }

signed main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        string s;
        cin>>s;
        int k;
        cin>>k;
        cout<<characterReplacement(s,k);
    

  return 0;}