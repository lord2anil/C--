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
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

 };
  vector<int> verticalOrder(node *root)
    {vector<int>res;
        map<int,vector<int>>mp;
        queue<pair<node*,int>>q;
       q.push({root,0});
       q.push({NULL,0});

while (!q.empty())
{
    auto p=q.front();
    q.pop();
   node*curr= p.first;
 int hd= p.second;
 if(curr!=NULL){
    mp[hd].push_back(curr->data);
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
 for (auto it = mp.begin(); it != mp.end(); it++) {
        for (int i = 0; i < it->second.size(); ++i)
            res.push_back(it->second[i] );
       
    }

    return res;




    }
int main(){
node*root=new node(1);
root->left=new node (2);
root->right=new node (3);
root->left->left=new node (4);
root->left->right=new node (5);
root->right->left=new node (6);
root->right->right=new node (7);
return 0;
}