
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

struct Node{
    int data;
    Node*left;
    Node*right;

};
 vector<int> topView(Node *root)
    {
       vector<int>v;
       map<int,int>mp;
       if(root==NULL){
        return v;
       }
       queue<pair<Node*,int>>q;
    
       q.push({root,0});
       q.push({NULL,0});
       while (!q.empty())
       {
        auto x=q.front();
        Node*curr=x.first;
        int hd=x.second;
        if(curr!=NULL){
         if(mp.find(hd)==mp.end()){
            mp[hd]=curr->data;
        
         }

         if(curr->left!=NULL){
            q.push({curr->left,hd-1});
         }
         if(curr->right!=NULL){
            q.push({curr->right,hd+1});
         }

        }
        else{
            if(!q.empty()){
                 q.push({NULL,0});
            }
        }

       }

       for (auto i : mp)
       {
         v.push_back(i.second);
       }
       
       return v;
    }

int main(){

return 0;
}