#include<bits/stdc++.h>
#include<stack>



using namespace std;



 void reverse(string s){
     stack<string> st;
     for (int i = 0; i < s.length(); i++)
     {
         string word="";
         while (s[i]!=' ' &&i <s.length() )
         {
             /* code */ word=word+s[i];
             i++;
         }
         
         st.push(word);

        
     }
     
     while (!st.empty())
     {
         /* code */cout<<st.top()<< endl;
         st.pop();
     }
     


 }
int main(){
    string s="how are you";
    reverse(s);


return 0;
}