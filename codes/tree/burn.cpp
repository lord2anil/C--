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
struct Node
{
    int data;
    Node*left;
    Node*right;
Node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};


Node* creatpar(Node*root,int target, map<Node*,Node*>&par){
    
    Node*res=NULL;
    queue<Node*>q;
    q.push(root);
    par[root]=NULL;
    // q.push(NULL);
    while(!q.empty())
    {Node*curr=q.front();
      q.pop();
      if(curr->data==target){
        res=curr;
      }
      if(curr->left!=NULL){
        par[curr->left]=curr;
        q.push(curr->left);
      }
      if(curr->right!=NULL){
        par[curr->right]=curr;
        q.push(curr->right);
      }
    }

    return res;
    

}
int burn(Node*root, map<Node*,Node*>par){
  map<Node*,bool>vis;
  queue<Node*>q;
  int ans=0;
  q.push(root);
  vis[root]=1;
 

  while (!q.empty())
  {
    int siz=q.size();
    bool f=0;
    while (siz--)
    {
      Node*curr=q.front();
      q.pop();

      if(curr->left!=NULL&&vis[curr->left]==0){
        f=1;
        q.push(curr->left);
        vis[curr->left] =1;     }
      if(curr->right!=NULL&&vis[curr->right]==0){
        f=1;

        q.push(curr->right);
        vis[curr->right] =1;     }
      if(par[curr]!=NULL&&vis[par[curr]]==0){
        
        f=1;

        q.push(par[curr]);
        vis[par[curr]] =1;     }
    }
    
    if(f){
      ans++;
    }
    
  }
  

return ans;


}


int minTime(Node* root, int target) 
    {
      map<Node*,Node*>par;
      Node* tar=creatpar(root,target,par);
      int ans= burn(tar,par);
      return ans;
    }


int main(){
Node*root=new Node(1);
root->left=new Node (2);
root->right=new Node (3);
root->left->left=new Node (4);
root->left->right=new Node (5);
root->right->left=new Node (6);
root->right->right=new Node (7);




return 0;
}