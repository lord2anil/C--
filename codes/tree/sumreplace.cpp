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
struct node
{
    int data;
    node*left;
    node*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
void sum(node*root){
    if(root==NULL){
        return;
    }
    sum(root->left);
    sum(root->right);
   if(root->left!=NULL){
    root->data+=root->left->data;
   }
   if(root->right!=NULL){
    root->data+=root->right->data;
   }
   

}
void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
       node *curr=q.front();
       q.pop();
        if(curr!=NULL){
            cout<<curr->data<<" ";
            if(curr->left!=NULL){
            q.push(curr->left);}
            if(curr->right!=NULL){
            q.push(curr->right);}
        }
        else{
           if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    
}

int main(){
node*root=new node(1);
root->left=new node (2);
root->right=new node (3);
root->left->left=new node (4);
root->left->right=new node (5);
root->right->left=new node (6);
root->right->right=new node (7);
sum(root);
print(root);



return 0;
}