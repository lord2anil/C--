#include<bits/stdc++.h>

using namespace std;
#define int long long


vector<int> prefix(string s){

    int n=s.size();
    vector<int>pre(n,0);

    for (int i = 1; i <n ; i++)
    {
       int j=pre[i];
       while(j>0&&pre[i]!=j)j=pre[j-1];
       if(s[i]==s[j])j++;
       pre[i]=j;
    }
    return pre;
    
}





signed main()
{ 
    string s="an";
    vector<int>pre=prefix(s);

       string t="xnjsanid";
    int i(0),j(0);
    int pos=0;
    while(i<t.size()){
        if(t[i]==s[j]){
            i++;
            j++;
        }else{
            if(j!=0){
                j=pre[j-1];
            }else{
                i++;
            }
        }
        if(j==s.size()){
            pos=i-s.size();break;

        }
    }
   cout<<pos<<endl;

  return 0;}