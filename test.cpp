#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a;i>=b;i--)
#define trav(a,x) for(auto &a:x)
#define fi first
#define se second
#define mod 1000000007
#define mod2 998244353
#define inf 1e18
#define eps 1e-9
using namespace std;
#define int long long
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}




class Solution {
public:




    void solve1(vector<int>&v,vector<int>&pre){

     stack<int>st;


     for (int i = v.size()-1; i >=0; i--)
     {
        while(!st.empty()||v[i]>=v[st.top()]){
            st.pop();
        }

        if(!st.empty()){
            pre[i]=v[st.top()];
        }
           st.push(i);

     }
    
    }
    void solve2(vector<int>&v,vector<int>&pre){

     stack<int>st;


     for (int i = 0; i<v.size();i++)
     {
        while(!st.empty()||v[i]>=v[st.top()]){
            st.pop();
        }

        if(!st.empty()){
            pre[i]=v[st.top()];
        }
           st.push(i);

     }
    
    }



    int maximalRectangle(vector<vector<char>>& matrix) {
        
      int n=matrix.size();
      int m=matrix[0].size();

        vector<vector<int>>mt(n,vector<int>(m,0));
        for (int i = 0; i < m; i++)
        { 

             for (int j = n-1; j>=0 ; j--)
             {
                /* code */
             
             
              int k =j;
              int cnt=0;
              while(k>=0&&matrix[k][i]=='1') {
                cnt++;
                k--;

              }
              mt[j][i]=cnt;
             }
             
        }
        int ans1=INT_MIN;

        for(auto &heights: mt)
        {
           

           


      vector<int>next(m,-1);
      vector<int>pre(m,-1);
          stack<int>st2;
        stack<int>st1;st1.push(-1);st2.push(-1);


        for (int i = m-1; i>=0; i--)
        {
           while(st1.top()!=-1&&heights[i]<=heights[st1.top()]){
            st1.pop();
           }
           next[i]=st1.top();
           st1.push(i);
        }
        

        for (int i = 0; i<m; i++)
        {
          while(st2.top()!=-1&&heights[i]<=heights[st2.top()]){
            st2.pop();
           }
           pre[i]=st2.top();
           st2.push(i);
        }
        int ans=0;

        for (int i = 0; i < m; i++)
        {
           int p=next[i];
           if(p==-1) p=m;
           int b=pre[i];
           int h=heights[i];
            ans=max(ans,h*(p-b-1));
        }
            


       

        ans1=max(ans1,ans);
             

        
        }
        





      

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0;j < m; j++)
        //     {
        //     cout<<mt[i][j]<<" ";
        //     }
        //     cout<<endl;
            
        // }
        
        return ans1;
        
    }
};


signed main()
{ 
int n;
  return 0;}