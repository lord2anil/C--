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

vector<int> level(node*root){
    vector<int>result;
    vector<int>ans;

    queue<node*>q;
    q.push(root);
    q.push(NULL);
    bool p=1;
    while (!q.empty())
    {
        node*n=q.front();
        q.pop();
        if(n!=NULL){
            ans.push_back(n->data);
            if(n->left!=NULL){
                q.push(n->left);

            }
            if(n->right!=NULL){
                q.push(n->right);

            }
       
       

       
        
        }
        else{
             if(p){
                for(auto i:ans){
                    result.push_back(i);

                }
                ans.clear();
                p=p^1;
             }else{
                reverse(ans.begin(), ans.end());
                for(auto i:ans){
                    result.push_back(i);

                }
                ans.clear();
                p=p^1;
                
             }
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    return result;
    




}





int main(){
node*root=new node(1);
root->left=new node (2);
root->right=new node (3);
root->left->left=new node (4);
root->left->right=new node (5);
root->right->left=new node (6);
root->right->right=new node (7);
level(root);
return 0;
}